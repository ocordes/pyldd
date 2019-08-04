"""

pyldd/povbricks.py

Author: Oliver Cordes

History:
 2019-05-23:
   - rewrite the basic brick object for rendering
 2018-09-30:
   - start to create a special object for each brick
      -> figures, doors etc.

"""

from pkg_resources import resource_string, resource_filename

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovbase import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *

from pyldd.lego_defs import *
import pyldd.files

import pickle
import gzip

pyldd_pickle_version = '1.0.0'


def save_python_bricks( python_file, model ):

    # open a new zip-file
    with gzip.open( python_file, 'wb') as f:
        pickle.dump( pyldd_pickle_version, f, pickle.HIGHEST_PROTOCOL )
        pickle.dump( model, f, pickle.HIGHEST_PROTOCOL )



def load_python_bricks( python_file ):

    try:
        with gzip.open( python_file, 'r' ) as f:
            v = pickle.load( f )
            if v != pyldd_pickle_version:
                print( 'Warning: python brick file has the wrong version \'%s != %s\'' % ( v, pyldd_pickle_version ))
                return None

            model = pickle.load( f )
    except:
        print( 'Error reading file \'%s\'' % python_file )
        model = None

    return model



def split_matrix(matrix):
    m1 = np.zeros(12)
    m2 = np.zeros(12)

    m1[0:9] = matrix[0:9]
    m2[9:12] = matrix[9:12]

    return m1, m2



def move2union(fromobj, union, obj, shift=None):
    union.add(obj)
    fromobj._items.remove(obj)
    if shift is None:
        # calculate the reference
        m = obj.full_matrix[0] - union.full_matrix[0]
        obj.full_matrix = None
        obj.full_matrix = m
    else:
        # this is the reference ;-)
        m1, m2 = split_matrix(obj.full_matrix[0])
        shift_val = np.zeros(12)
        shift_val[10] = shift
        obj.full_matrix = None
        obj.full_matrix, union.full_matrix = m1+shift_val, m2-shift_val


class PovPreTransformation(PovWriterObject):
    def __init__(self, comment='pre transform'):
        self.__pre_rotate    = []
        self.__pre_translate = []


    @property
    def pre_rotate(self):
        return self.__pre_rotate


    @pre_rotate.setter
    def pre_rotate(self, new_rotate):
        rotate = Point3D(new_rotate)
        self.__pre_rotate.append(rotate)


    def _write_pre_rotate(self, ffile, indent=0):
        for r in self.__pre_rotate:
            self._write_indent(ffile, 'rotate %s\n' % r, indent=indent)


    @property
    def pre_translate(self):
        return self.__pre_translate


    @pre_translate.setter
    def pre_translate(self, new_translate):
        translate = Point3D(new_translate)
        self.__pre_translate.append(translate)


    def _write_pre_translate(self, ffile, indent=0):
        for r in self.__pre_translate:
            self._write_indent(ffile, 'translate %s\n' % r, indent=indent)


class PovLEGOBrick(PovCSGObject, PovPreTransformation):
    _name = 'LEGO Brick'
    def __init__(self, nr, itemNos, color, config,
                  decoration, decoration_mappings):
        PovCSGObject.__init__(self)

        self._decoration          = decoration
        self._decoration_mappings = decoration_mappings
        self._itemNos             = itemNos
        self._config              = config
        self._color               = color
        self._nr                  = nr           # brick number in list


        default_config = config['DEFAULT']
        # create the brick description
        self._descr = default_config.get('descr', 'unknown brick')

        # calculate the number of necessary objects to describe the brick
        max_parts = default_config.getint('parts', 0)
        if len(self._decoration) > 0:
            # it is minimum one decoration, maybe more ...
            max_parts += 1

        if max_parts == 1:
            # no container necessary
            self._container = None
        else:
            self._container = PovCSGUnion(comment=self._descr)

        for partnr in range(default_config.getint('parts', 0)):
            parts = config['PART%i' % partnr]
            macro = parts['part']

            brick_part = PovCSGMacro('#%i %s' % ( nr, self._descr), macrocmd=macro)


            texture = parts.get('texture', 'n')
            if texture == 'n':
                brick_part.set_texture(color)
            elif texture == 'r':
                brick_part.set_texture('{} {}'.format(color,
                                                 'normal { bumps 0.1 scale 2 }'))
            elif texture == 's':
                pass

            if self._container is None:
                self._container = brick_part
            else:
                self._container.add(brick_part)


        # add decoration if necessary
        if len(self._decoration) > 0:
            #get the surfaces for this decoration
            surfaces = None
            did = self._decoration_mappings.get(self._decoration[0], None)
            if did is not None:
                surfaces = did.get(itemNos, None)

            if surfaces is None:
                print('Surface info for brick={} and decoration={} not found!'.format(itemNos, self._decoration[0]))
            else:
                for sid in surfaces:
                    # now we have all information for creating the decoration
                    decal = self._create_decal(self._decoration[0], sid)
                    if decal is None:
                        print('Creating decal failed!')
                    else:
                        self._container.add(decal)



    def decorate(self, decoration, surface):
        decal = self._create_decal(decoration, surface)
        if decal is None:
            print('Creating decal failed!')
        else:
            if isinstance(self._container, PovCSGUnion):
                # we are lucky ...

                # copy macros to the decal
                for m in self._container._items[0].macros:
                    decal.macros = m
            else:
                #print('Problem Brick is not a container')
                new_container = PovCSGUnion(comment=self._descr)
                save_macros = self._container.macros
                new_container.move_attributes(self._container)
                new_container.add(self._container)
                # copy macros to the decal
                for m in save_macros:
                    decal.macros = m
                    self._container.macros = m
                new_container.macros = None

                # make the new container as the default
                self._container = new_container

            self._container.add(decal)



    def _create_decal(self, decoration, surface):
        mapname = 'MAPPING%i' % surface
        if mapname not in self._config:
            print('No mapinfo given for brick={} surface={}!'.format(self._itemNos, surface))
            return None
        mapdef = self._config[mapname]
        macro = mapdef.get('map', None)
        if macro is None:
            return None

        obj = PovCSGMacro('#%i %s mapping' % ( self._nr, self._descr), macrocmd=macro)
        obj.set_texture(self._color) # the original color first...

        # create the texture
        scale     = mapdef.get('scale', '1.0')
        rotate    = mapdef.get('rotate', '<0,0,0>')
        translate = mapdef.get('translate', '<0,0,0>')
        map_type  = mapdef.get('type', '0')
        gamma     = mapdef.get('gamma', '1.0')
        emission  = mapdef.get('emission', '0.0')
        s = """
             pigment{
                image_map{
                  png "%s.png"
                  gamma %s
                  map_type %s
                once }
             }
             finish{ emission %s }
             scale %s
             rotate %s
             translate %s
        """ % (decoration, gamma, map_type, emission, scale, rotate, translate)

        obj.set_texture(s)

        return obj


    def set_texture(self, texture):
        self._container.set_texture(texture)


    @property
    def macros(self):
        return self._container.macros


    @macros.setter
    def macros(self, new_macro):
        if hasattr(self._container, '_items'):
            for i in self._container._items:
                i.macros = new_macro
        else:
            self._container.macros = new_macro


    @property
    def full_matrix(self):
        return self._container.full_matrix


    @full_matrix.setter
    def full_matrix(self, val):
        self._container.full_matrix = val


    @property
    def rotate(self):
        return self._container._rotate


    @rotate.setter
    def rotate(self, new_rotate):
        self._container.rotate = new_rotate


    @property
    def translate(self):
        return self._container.translate


    @translate.setter
    def translate(self, val):
        self._container.translate = val


    @property
    def scale(self):
        return self._container.scale


    @scale.setter
    def scale(self, val):
        self._container.scale = val


    def write_pov(self, ffile, indent = 0 ):
        self._container.write_pov(ffile, indent=indent)


    # for rigid systems

    """
    fix_rigid_trafo

    applies the fix for the rigid transformation, which is done after
    the brick transformation, so transformation matrix needs
    to be modified!
    """
    def fix_rigid_trafo(self, rigid_trafo):
        # split the trafos into the matrix parts
        full_mat = self.full_matrix[0].rotation
        rigid_mat = rigid_trafo.rotation
        rigid_mat_inv = np.linalg.inv(rigid_mat)

        # calculate the rest matrix for the brick
        # brick = x * rigid
        # brick * rigid^-1 = x
        rest_mat = np.dot(full_mat,rigid_mat_inv)

        # calculate the raw difference for the translation
        rest_trans =  self.full_matrix[0].translation - rigid_trafo.translation

        # apply the rotation to the rest tranlation, which is in
        # the rigid matrix!!
        rest_trans = np.dot(rigid_mat, rest_trans)

        fixed_trafo_okay = Matrix3D(rotation=rest_mat, translation=rest_trans)

        # recombine the results for the brick
        self.full_matrix = None
        self.full_matrix = fixed_trafo_okay




# python brick models


class PovLEGOModel(PovCSGUnion):
    def find_brick(self, itemNos):
        bricks = []
        for i in self._items:
            if isinstance(i, PovLEGOBrick):
                if i._itemNos == itemNos:
                    bricks.append(i)
            elif hasattr( i, 'find_brick' ):
                j = i.find_brick(itemNos)
                bricks += j
            else:
                print('class: ', i.__class__.__name__)

        return bricks


    def lookforBrick( self, designId ):
        print('deprecated: lookforBrick')
        return [ i for i in self._items if i._itemNos == designId ]


    def lookforModel( self, model ):
        return [ i for i in self._items if isinstance( i, model) ]


    def reconfigure( self ):
        pass


    """
    load_model

    loads a LDD file and merge it into the model, rigids and joints will
    be overwritten ...
    """
    def load_model(self, filename):
        print(filename)


        # load ldd_model depending of the type of the calling model
        if isinstance(self, PovLEGORigidModel):
            ldd_model = pyldd.files.read_ldd_file(filename, True)
        else:
            print('Cannot use the defined scene model! Use a PovLEGORigidModel!')
            ldd_model = pyldd.files.read_ldd_file(filename, False)

        ldd_model.generate_povlist('static', self)


## Rigid models

class PovRigidModel(PovLEGOModel):
    def __init__(self, nr):
        PovLEGOModel.__init__(self, comment='Rigid Model #{}'.format(nr))



class PovLEGORigidModel(PovLEGOModel):
    def __init__(self, rigids=[], joints=[], comment='Rigid System Model'):
        PovLEGOModel.__init__(self, comment=comment)

        self._rigids      = rigids
        self._joints      = joints
        self._rigid_items = []


    def set_rigis(self, rigids, joints):
        self._rigids = rigids
        self._joints = joints


    def add(self, new_obj):
        PovLEGOModel.add(self, new_obj)
        if ( isinstance( new_obj, list ) == True ) or  ( isinstance( new_obj, tuple ) == True ):
            for i in new_obj:
                self._rigid_items.append(i)
        else:
            self._rigid_items.append(new_obj)



    def get_rigid(self, nr):
        if nr < len(self._rigid_items):
            return self._rigid_items[nr]
        else:
            return None


    def look_for_joints(self, nr):
        joints = []
        for j in self._joints:
            if (j._a.rigidRef == nr) or (j._b.rigidRef == nr):
                joints.append(j)
        return joints


    def get_rigidrefs(self, joint, refid):
        if joint._a.rigidRef == refid:
            return joint._a, joint._b
        else:
            return joint._b, joint._a


    def calculate_rigid_rotation(self, rigid_rot, rigid_trans, anchor, angle):
        # calculate the rotation for the rigid
        rotation = np.dot(rigid_rot,angle)

        # the translation is not that easy:
        # - rotate the anchor point (the t vector)
        # - apply this vector to the old rigid rotation
        # - add the old rigid translation
        translation = np.dot((np.dot(-anchor,angle)+anchor),rigid_rot)+rigid_trans

        return Matrix3D(rotation=rotation, translation=translation)


    def rotate_rigid(self, nr, refnr,  angle, update_all=True, rot_axis=None):
        joints = self.look_for_joints(nr)
        main_joint = None
        for j in joints:
            if (j._a.rigidRef == refnr) or (j._b.rigidRef == refnr):
                main_joint = j

        if main_joint is None:
            raise ValueError('Joint not found!')

        rigidRef1, rigidRef2 = self.get_rigidrefs(main_joint, nr)

        rigid = self.get_rigid(nr)
        if rigid is None:
            raise ValueError('Rigid #{} not found!'.format(nr))

        # so now do the calculations
        if rot_axis is None:
            rot_axis = get_rot_axes(rigidRef1.a, rigidRef1.z, rigidRef2.a, rigidRef2.z)


        angle = create_rotation_matrix(rot_axis, angle).rotation

        # the anchor (vector) is in the first rigidRef t entry
        anchor = rigidRef1.t


        rigid_rot   = rigid.full_matrix[0].rotation
        rigid_trans = rigid.full_matrix[0].translation


        rigid.full_matrix = None
        rigid.full_matrix = self.calculate_rigid_rotation(rigid_rot, rigid_trans, anchor, angle)

        #print(rigid.full_matrix[0])


    def move_rigid(self, src_rigid, dest_rigid):

        pov_part = self.get_rigid(src_rigid)
        rigid = self.get_rigid(dest_rigid)

        if pov_part is None:
            raise ValueError('Rigid #{}not found!'.format(src_rigid))

        if rigid is None:
            raise ValueError('Rigid #{}not found!'.format(dest_rigid))



        print('Moving rigid #{} into #{} union...'.format(src_rigid, dest_rigid))
        # change matrix from part with respect of rigid
        pov_part.fix_rigid_trafo(rigid.full_matrix[0])

        # move the src_rigid into dest_rigid
        rigid.add(pov_part)
        self._rigids[src_rigid] = None
        self._items.pop(src_rigid)
