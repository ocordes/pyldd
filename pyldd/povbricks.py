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


class PovSimpleBrick( PovCSGMacro ):
    def __init__( self, nr, descr, cmd, itemNos, decoration, defs ):
        PovCSGMacro.__init__( self, '#%i %s' % ( nr, descr), macrocmd=cmd )


class PovSimpleBrickMap( PovCSGUnion ):
    def __init__( self, nr, descr, cmd, itemNos, decoration, defs ):
        PovCSGUnion.__init__( self, comment='#%i %s map' % ( nr, descr ) )

        self._defs = defs
        self._decoration = decoration


        self._main_brick = PovSimpleBrick( nr, descr, cmd, itemNos, decoration, defs )

        self.add( self._main_brick )

        print( defs )
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
        print( self._decoration, self._defs )
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
