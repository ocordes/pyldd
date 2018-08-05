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
#macro L_Transform( width, height, length )
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

        f.add_declare( declare_name, scene )

        f.write_povfile()
