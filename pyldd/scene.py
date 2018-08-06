"""

pyldd/scene.py

Author: Oliver Cordes

History:
 2018-07-27: start project

"""

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *

lego_transform_macro = """
// create a macro for system LEGO transformation
#macro L_Transform( WIDTH, HEIGHT, LENGTH )
transform{
scale <-1.000000,-1.000000,1.000000>
rotate <-90.000000,-90.000000,0.000000>  // rotate back into xz plane
// apply the centroid
translate <LG_BRICK_WIDTH*WIDTH/2.,HEIGHT,-LG_BRICK_WIDTH*LENGTH/2.>
}
#end
"""

class Scene( object ):
    def __init__( self, abricks ):
        self.bricks = abricks


    @property
    def nr_bricks( self ):
        return len( self.bricks )


    def gen_material_list( self ):
        mat_list = {}
        for brick in self.bricks:
            if brick.itemNos in mat_list:
                mat_list[brick.itemNos][0] += 1
            else:
                mat_list[brick.itemNos] = [ 1, brick ]

        return mat_list


    def generate_povfile( self, povfile, declare_name ):
        f = PovFile( filename = povfile )
        f.add_include( 'lg_color2.inc')
        f.add_include( 'lg_defs.inc')

        scene = PovCSGUnion()
        for brick in self.bricks:
            pov_part, include_list = brick.get_pov_object()
            if pov_part is None:
                pass
            else:
                scene.add( pov_part )
                f.add_include( include_list )

        f.add_macro( lego_transform_macro )
        f.add_declare( declare_name, scene )

        f.write_povfile()
