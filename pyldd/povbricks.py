"""

pyldd/povbricks.py

Author: Oliver Cordes

History:
 2018-09-30:
   - start to create a special object for each brick
      -> figures, doors etc.

"""


from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovbase import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *

from pyldd.lego_defs import *

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
    def __init__(self, nr, itemNos, color, config,
                  decoration, decoration_mappings):
        PovCSGObject.__init__(self)

        self._decoration          = decoration
        self._decoration_mappings = decoration_mappings


        default_config = config['DEFAULT']
        # create the brick description
        descr = default_config.get('descr', 'unknown brick')

        # calculate the number of necessary objects to describe the brick
        max_parts = default_config.getint('parts', 0)
        if len(self._decoration) > 0:
            # it is minimum one decoration, maybe more ...
            max_parts += 1

        if max_parts == 1:
            # no container necessary
            self._container = None
        else:
            self._container = PovCSGUnion(comment=descr)

        for partnr in range(default_config.getint('parts', 0)):
            parts = config['PART%i' % partnr]
            macro = parts['part']

            brick_part = PovCSGMacro('#%i %s' % ( nr, descr), macrocmd=macro)


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
                    mapdef = 'MAPPING%i' %sid
                    if mapdef in config:
                        # now we have all information for creating the decoration
                        decal = self._create_decal(self._decoration[0], config[mapdef], nr, descr, color)
                        if decal is None:
                            print('Creating decal failed!')
                        else:
                            self._container.add(decal)
                    else:
                        print('No mapinfo given for brick={} surface={}!'.format(itemNos, sid))






    def _create_decal(self, decoration, mapdef, nr, descr, color):
        macro = mapdef.get('map', None)
        if macro is None:
            return None

        obj = PovCSGMacro('#%i %s mapping' % ( nr, descr), macrocmd=macro)
        obj.set_texture(color) # the original color first...

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



class PovSimpleBrick(PovCSGMacro, PovPreTransformation):
    def __init__(self, nr, descr, cmd, itemNos, decoration, defs):
        PovCSGMacro.__init__(self, '#%i %s' % ( nr, descr), macrocmd=cmd)
        PovPreTransformation.__init__(self)

        self._itemNos = itemNos
        self._defs    = defs

        self.add_pre_commands(self._write_pre_translate)
        self.add_pre_commands(self._write_pre_rotate)


    def apply_changes(self):
        pass


    def write_pov(self, ffile, indent = 0):
        self.apply_changes()
        PovCSGMacro.write_pov(self, ffile, indent=indent)


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


class PovSimpleBrickUnion(PovCSGUnion, PovPreTransformation):
    def __init__(self, comment='brick union'):
        PovCSGUnion.__init__(self, comment=comment)
        PovPreTransformation.__init__(self)

        self.add_pre_commands(self._write_pre_translate)
        self.add_pre_commands(self._write_pre_rotate)


    # for rigid systems

    """
    fix_rigid_trafo

    applies the fix for the rigid transformation, which is done after
    the brick transformation, so transformatio matrix needs
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


    def apply_changes(self):
        pass


    def write_pov(self, ffile, indent = 0):
        self.apply_changes()
        PovCSGUnion.write_pov(self, ffile, indent=indent)



class PovSimpleBrickMap( PovSimpleBrickUnion ):
    def __init__( self, nr, descr, cmd, itemNos, decoration, defs ):
        PovSimpleBrickUnion.__init__( self, comment='#%i %s map' % ( nr, descr ) )

        self._itemNos    = itemNos
        self._defs       = defs
        self._decoration = decoration

        self._main_brick = PovSimpleBrick( nr, descr, cmd, itemNos, decoration, defs )

        self.add( self._main_brick )

        cmd_map = defs['MAPPING0'].get( 'map', 'lg_unknown' )
        if ( cmd_map != 'lg_unknown' ):
            self._map_part = PovCSGMacro( '#%i %s mapping' % ( nr, descr), macrocmd=cmd_map )
            self.add( self._map_part )
        else:
            self._map_part = None


    def set_texture( self, texture ):
        self._main_brick.set_texture( texture )
        if self._map_part is not None:
            self._map_part.set_texture( texture )
            self.set_decoration()


    # mimik the macros
    @property
    def macros( self ):
        return self._main_brick.macros


    @macros.setter
    def macros( self, new_macro ):
        self._main_brick.macros = new_macro
        if self._map_part is not None:
            self._map_part.macros = new_macro


    def set_decoration( self ):
        #print( self._decoration, self._defs )
        mapdef = self._defs['MAPPING0']
        scale     = mapdef.get('scale', '1.0')
        rotate    = mapdef.get('rotate', '<0,0,0>')
        translate = mapdef.get('translate', '<0,0,0>')
        map_type  = mapdef.get('type', '0')
        s = """
             pigment{
                image_map{
                  png "%s.png"
                  map_type %s
                once }
             }
             scale %s
             rotate %s
             translate %s
        """ % (self._decoration[0], map_type, scale, rotate, translate)

        self._map_part.set_texture(s)
        #self.add_extra_file('%s.png' % self._decoration[0])













# python brick models
class PovBrickModel( PovCSGUnion ):
    def __init__( self, comment='Python model' ):
        PovCSGUnion.__init__( self, comment=comment )


    def lookforBrick( self, designId ):
        return [ i for i in self._items if i._itemNos == designId ]


    def lookforModel( self, model ):
        return [ i for i in self._items if isinstance( i, model) ]


    def reconfigure( self ):
        pass



### Warning not working!

class PovBrickFigure(PovBrickModel):
    def __init__(self, name='noname'):
        PovBrickModel.__init__(self, comment='Minifig name=%s' % name)

        self._arm_left      = None
        self._arm_right     = None
        self._hand_left     = None
        self._hand_right    = None
        self._leg_left      = None
        self._leg_right     = None
        self._head          = None
        self._hair          = None
        self._torso         = None
        self._hips          = None
        self._fig_torso     = PovBrickFigureGroup()
        self._fig_left_arm  = PovBrickFigureGroup()
        self._fig_right_arm = PovBrickFigureGroup()


    def sort_hands( self, hand1, hand2, left_arm ):
        h1m1, h1m2 = split_matrix( hand1.full_matrix[0] )
        h2m1, h2m2 = split_matrix( hand2.full_matrix[0] )
        lm1, lm2 = split_matrix( left_arm.full_matrix[0] )

        dist1 = ((h1m2 - lm2)**2).sum()
        dist2 = ((h2m2 - lm2)**2).sum()

        if dist1 < dist2:
            return hand1, hand2
        else:
            return hand2, hand1


    def reconfigure(self):
        # left arm
        b = self.lookforBrick(3818)
        if ( len(b) == 1 ):
            self._arm_left = b[0]

        # right arm
        b = self.lookforBrick( 3819 )
        if ( len(b) == 1 ):
            self._arm_right = b[0]

        # left leg
        b = self.lookforBrick( 3817 )
        if ( len(b) == 1 ):
            self._leg_left = b[0]
            self._leg_left.fixtransform()

        # right leg
        b = self.lookforBrick( 3816 )
        if ( len(b) == 1 ):
            self._leg_right = b[0]
            self._leg_right.fixtransform()

        # head
        b = self.lookforModel( PovBrickHead )
        if ( len(b) == 1 ):
            self._head = b[0]

        # hair
        b = self.lookforModel( PovBrickHair )
        if ( len(b) == 1 ):
            self._hair = b[0]

        # Torso
        b = self.lookforModel( PovBrickTorso )
        if ( len(b) == 1 ):
            self._torso = b[0]

        # hips
        b = self.lookforBrick( 3815 )
        if ( len(b) == 1 ):
            self._hips = b[0]

        # hands
        b = self.lookforBrick( 3820 )
        # the results should be always 2 hands!
        if len(b)!=2:
            print('Figure needs always two hands! Aborted!')
            sys.exit(0)

        self._hand_left, self._hand_right = self.sort_hands( b[0], b[1], self._arm_left )

        # hips / torso
        # hips - LG_BRICK_HEIGHT/2 , rotate, +LG_BRICK_HEIGHT/2
        # -> reduce all matrices to translations
        # -> the main translation + LG_BRICK_HEIGHT/2
        # -> change hips matrix - LG_BRICK_HEIGHT/2
        # -> dereference all matrices of torso etc. according to hips
        #  -> hips rotate valid now for all figure torso elements

        move2union(self, self._fig_left_arm, self._arm_left, shift=0.)
        move2union(self, self._fig_left_arm, self._hand_left)
        move2union(self, self._fig_right_arm, self._arm_right, shift=0.)
        move2union(self, self._fig_right_arm, self._hand_right)
        self.add(self._fig_left_arm)
        self.add(self._fig_right_arm)

        move2union(self, self._fig_torso, self._hips, shift=LG_BRICK_HEIGHT/2.)
        move2union(self, self._fig_torso, self._torso)
        move2union(self, self._fig_torso, self._head)
        move2union(self, self._fig_torso, self._hair)
        move2union(self, self._fig_torso, self._fig_left_arm)
        move2union(self, self._fig_torso, self._fig_right_arm)

        self.add(self._fig_torso)



    def move_head( self, angle ):
        self._head.move( angle )
        self._hair.move( angle )


    def bend( self, angle ):
        self._fig_torso.move(angle)


    def left_arm_move(self, angle):
        self._fig_left_arm.move(angle)


    def right_arm_move(self, angle):
        self._fig_right_arm.move(angle)


    def left_hand_move(self, angle):
        self._hand_left.move(angle)


    def right_hand_move(self, angle):
        self._hand_right.move(angle)


    def left_leg_move(self,angle):
        self._leg_left.move(angle)


    def right_leg_move(self,angle):
        self._leg_right.move(angle)


## Rigid models

#class PovRigidModel(PovCSGUnion):
class PovRigidModel(PovSimpleBrickUnion):
    def __init__(self, nr):
        PovSimpleBrickUnion.__init__(self, comment='Rigid Model #{}'.format(nr))



class PovRigidSystemModel(PovCSGUnion):
    def __init__(self, rigids, joints, comment='Rigid System Model'):
        PovCSGUnion.__init__(self, comment=comment)

        self._rigids      = rigids
        self._joints      = joints
        self._rigid_items = []


    def add(self, new_obj):
        PovCSGUnion.add(self, new_obj)
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
