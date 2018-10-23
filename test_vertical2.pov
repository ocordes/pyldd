// this file is generated
// from pypovlib V0.1.8 written by Oliver Cordes (C) 2015-2018

#include "lg_color2.inc"
#include "lg_defs.inc"
#include "lg_3865.inc"
#include "lg_3003.inc"
#include "lg_99206.inc"
#include "lg_3023.inc"
#include "lg_3068.inc"

// macro definition #0
// create a macro for system LEGO transformation
#macro L_Transform( WIDTH, HEIGHT, LENGTH, SX, SY, SZ )
transform{
scale <-1.000000,-1.000000,1.000000>
rotate <-90.000000,-90.000000,0.000000>  // rotate back into xz plane
// apply the centroid
scale <SX,SY,SZ>
translate <LG_BRICK_WIDTH*WIDTH/2.,LG_BRICK_HEIGHT*HEIGHT,-LG_BRICK_WIDTH*LENGTH/2.>
}
#end


#declare testpov = union{
    // Union Item #1
    // #0 base 8 x 16 plate
    object{
        lg_3865
        L_Transform( 15,0,7,1,1,1 )
        texture{
            lg_green
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-7.599999904632568,0.15000000596046448,3.6000001430511475>
    }
    // Union Item #2
    // #1 brick 2 x 2
    object{
        lg_3003
        L_Transform( 1,1,1,1,1,1 )
        texture{
            lg_red
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,3.5999999046325684,0.15000000596046448,3.6000003814697266>
    }
    // Union Item #3
    // #2 plate 2 x 2 x 2/3 with two studs on side and two raised
    object{
        lg_99206
        L_Transform( 0,2/3,1,1,1,-1 )
        texture{
            lg_bluish_grey
        }
        matrix <0.0,0.0,-1.0,0.0,1.0,0.0,1.0,0.0,0.0,4.400000095367432,1.1100000143051147,3.6000006198883057>
    }
    // Union Item #4
    // #3 plate 1 x 2
    object{
        lg_3023
        L_Transform( 1,1/3,0,1,1,-1 )
        texture{
            lg_blue
        }
        matrix <1.0,0.0,0.0,0.0,0.0,1.0,0.0,-1.0,0.0,3.5999999046325684,1.5099999904632568,4.000000476837158>
    }
    // Union Item #5
    // #4 plate 1 x 2
    object{
        lg_3023
        L_Transform( 1,1/3,0,1,1,-1 )
        texture{
            lg_red
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,3.5999999046325684,1.75,3.6000006198883057>
    }
    // Union Item #6
    // #5 flat tile 2 x 2
    object{
        lg_3068
        L_Transform( 1,1/3,1,1,1,1 )
        texture{
            lg_yellow
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,3.5999999046325684,2.069999933242798,4.40000057220459>
    }
    // Union Item #7
    // #6 plate 1 x 2
    object{
        lg_3023
        L_Transform( 1,1/3,0,1,1,-1 )
        texture{
            lg_blue
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,2.000000476837158,0.15000000596046448,3.6000001430511475>
    }
    scale <-1.000000,1.000000,1.000000>
}




// end of generated file
