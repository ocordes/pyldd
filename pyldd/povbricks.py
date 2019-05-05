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
    the brick transformation, so rotation matrix and translation need
    to be modified!
    """
    def fix_rigid_trafo(self, rigid_trafo):
        # split the trafos into the matrix parts
        full_mat = self.full_matrix[0][:9].reshape((3,3))
        rigid_mat = rigid_trafo[:9].reshape((3,3))
        rigid_mat_inv = np.linalg.inv(rigid_mat)

        # calculate the rest matrix for the brick
        # brick = x * rigid
        # brick * rigid^-1 = x
        rest_mat = np.dot(full_mat,rigid_mat_inv)

        # calculate the raw difference for the translation
        rest_trans =  self.full_matrix[0][9:] - rigid_trafo[9:]

        # apply the rotation to the rest tranlation, which is in
        # the rigid matrix!!
        rest_trans = np.dot(rigid_mat, rest_trans)

        # recombine the results for the brick
        self.full_matrix = None
        self.full_matrix = np.append(rest_mat.flatten(), rest_trans)


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
    the brick transformation, so rotation matrix and translation need
    to be modified!
    """
    def fix_rigid_trafo(self, rigid_trafo):
        # split the trafos into the matrix parts
        full_mat = self.full_matrix[0][:9].reshape((3,3))
        rigid_mat = rigid_trafo[:9].reshape((3,3))
        rigid_mat_inv = np.linalg.inv(rigid_mat)

        # calculate the rest matrix for the brick
        # brick = x * rigid
        # brick * rigid^-1 = x
        rest_mat = np.dot(full_mat,rigid_mat_inv)

        # calculate the raw difference for the translation
        rest_trans =  self.full_matrix[0][9:] - rigid_trafo[9:]

        # apply the rotation to the rest tranlation, which is in
        # the rigid matrix!!
        rest_trans = np.dot(rigid_mat, rest_trans)

        # recombine the results for the brick
        self.full_matrix = None
        self.full_matrix = np.append(rest_mat.flatten(), rest_trans)


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

        cmd_map = defs.get( 'map', 'lg_unknown' )
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
        scale     = self._defs.get( 'map_scale', '1.0' )
        rotate    = self._defs.get( 'map_rotate', '<0,0,0>')
        translate = self._defs.get( 'map_translate', '<0,0,0>')
        map_type  = self._defs.get( 'map_type', '0' )
        s = """
             pigment{
                image_map{
                  png "Decorations/%s.png"
                  map_type %s
                once }
             }
             scale %s
             rotate %s
             translate %s
        """ % ( self._decoration[0], map_type, scale, rotate, translate )

        self._map_part.set_texture( s )



class PovBrickDoor( PovSimpleBrick ):
    def __init__( self, nr, descr, cmd, ItemNos, decoration, defs ):
        PovSimpleBrick.__init__( self, nr, descr, cmd, ItemNos, decoration, defs )


class PovBrickTorso( PovSimpleBrickMap ):
    def __init__( self, nr, descr, cmd, ItemNos, decoration, defs ):
        PovSimpleBrickMap.__init__( self, nr, descr, cmd, ItemNos, decoration, defs )
        #print( 'Minifig Torso' )


class PovBrickHead(PovSimpleBrickMap):
    def __init__(self, nr, descr, cmd, ItemNos, decoration, defs):
        PovSimpleBrickMap.__init__(self, nr, descr, cmd, ItemNos, decoration, defs)
        #print( 'Minifig Head' )

        self.move_head = 0


    def move(self, angle):
        self.move_head += angle


    def apply_changes(self):
        self.pre_rotate = (0, self.move_head, 0)



class PovBrickHair(PovSimpleBrick):
    def __init__(self, nr, descr, cmd, ItemNos, decoration, defs):
        PovSimpleBrick.__init__(self, nr, descr, cmd, ItemNos, decoration, defs)

        self.move_hair = 0


    def move(self, angle):
        self.move_hair += angle


    def apply_changes(self):
        self.pre_rotate = (0, self.move_hair, 0)



class PovBrickHand(PovSimpleBrickMap):
    def __init__(self, nr, descr, cmd, ItemNos, decoration, defs):
        PovSimpleBrickMap.__init__(self, nr, descr, cmd, ItemNos, decoration, defs)

        self.move_head = 0


    def move(self, angle):
        self.move_head += angle


    def apply_changes(self):
        self.pre_rotate = (0, 0, self.move_head)


class PovBrickLeg(PovSimpleBrick):
    def __init__(self, nr, descr, cmd, ItemNos, decoration, defs):
        PovSimpleBrick.__init__(self, nr, descr, cmd, ItemNos, decoration, defs)

        self.move_leg = 0.


    def fixtransform(self):
        # get the trafo matrix
        shift_val = np.zeros(12)
        shift_val[10] = 1.12
        self.full_matrix[0] += shift_val

        shift = np.zeros(3)
        shift[1] = -1.12
        self.pre_translate = shift


    def move(self,angle):
        self.move_leg += angle


    def apply_changes(self):
        # somehow negative angles means moving forward
        self.pre_rotate = (-self.move_leg,0,0)


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



class PovBrickFigureGroup(PovSimpleBrickUnion):
    def __init__(self):
        PovSimpleBrickUnion.__init__(self, comment='Figure group')

        self._move_angle = 0


    def move(self, angle):
        self._move_angle += angle


    def apply_changes(self):
        self.pre_rotate = (self._move_angle, 0, 0)



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

class PovRigidModel(PovCSGUnion):
    def __init__(self, comment='Rigid Model'):
        PovCSGUnion.__init__(self, comment=comment)



class PovRigidSystemModel(PovCSGUnion):
    def __init__(self, comment='Rigid System Model'):
        PovCSGUnion.__init__(self, comment=comment)


    def get_rigid(self, nr):
        if nr < len(self._items):
            return self._items[nr]
        else:
            return None
