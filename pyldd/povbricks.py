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


class PovSimpleBrick( PovCSGMacro ):
    def __init__( self, nr, descr, cmd, itemNos, decoration, defs ):
        PovCSGMacro.__init__( self, '#%i %s' % ( nr, descr), macrocmd=cmd )

        self._itemNos = itemNos
        self._defs    = defs


class PovSimpleBrickMap( PovCSGUnion ):
    def __init__( self, nr, descr, cmd, itemNos, decoration, defs ):
        PovCSGUnion.__init__( self, comment='#%i %s map' % ( nr, descr ) )

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

class PovBrickHead( PovSimpleBrickMap ):
    def __init__( self, nr, descr, cmd, ItemNos, decoration, defs ):
        PovSimpleBrickMap.__init__( self, nr, descr, cmd, ItemNos, decoration, defs )
        #print( 'Minifig Head' )

        self.move_head = 0


    def move( self, angle ):
        self.move_head += angle


class PovBrickHair( PovSimpleBrick ):
    def __init__( self, nr, descr, cmd, ItemNos, decoration, defs ):
        PovSimpleBrick.__init__( self, nr, descr, cmd, ItemNos, decoration, defs )

        self.move_hair = 0


    def move( self, angle ):
        self.move_hair += angle


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


class PovBrickFigure( PovBrickModel ):
    def __init__( self, name='noname' ):
        PovBrickModel.__init__( self, comment='Minifig name=%s' % name )

        self._arm_left  = None
        self._arm_right = None
        self._leg_left  = None
        self._leg_right = None
        self._head      = None
        self._hair      = None
        self._torso     = None
        self._hips      = None


    def reconfigure( self ):
        # left arm
        b = self.lookforBrick( 3818 )
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

        # right leg
        b = self.lookforBrick( 3816 )
        if ( len(b) == 1 ):
            self._leg_left = b[0]

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
        print( len( b ) )


    def move_head( self, angle ):
        self._head.move( angle )
        self._hair.move( angle )
