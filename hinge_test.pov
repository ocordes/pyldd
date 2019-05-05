// this file is generated
// from pypovlib V0.1.15 written by Oliver Cordes (C) 2015-2019

#include "lg_color2.inc"
#include "lg_defs.inc"
#include "lg_3865.inc"
#include "lg_3004.inc"
#include "lg_3831.inc"
#include "lg_3830.inc"

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


#declare scene = // Rigid System Model
union{
    // Union Item #1
    // Rigid Model
    union{
        // Union Item #1
        // #0 base 8 x 16 plate
        object{
            lg_3865
            L_Transform( 15,0,7,1,1,1 )
            texture{
                lg_green
            }
            matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0>
        }
        // Union Item #2
        // #1 brick 1 x 2
        object{
            lg_3004
            L_Transform( 1,1,0,1,1,1 )
            texture{
                lg_red
            }
            matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,4.800000190734863,0.0,-1.5999999046325684>
        }
        // Union Item #3
        // #2 hinge brick 1 x 4 base
        object{
            lg_3831
            L_Transform( 3,1,-1,1,1,-1 )
            texture{
                lg_white
            }
            matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,4.800000190734863,0.9600000083446503,-1.5999999046325684>
        }
        matrix <1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-5.200000286102295,0.14999619126319885,5.200000286102295>
    }
    // Union Item #2
    // Rigid Model
    union{
        // Union Item #1
        // #3 hinge brick 1 x 4 top
        object{
            lg_3830
            L_Transform( -1,1,-1,1,1,-1 )
            texture{
                lg_blue
            }
            matrix <1.0,0.0,-5.551115123125783e-17,0.0,1.0,0.0,5.551115123125783e-17,0.0,1.0,0.0,0.0,0.0>
        }
        // Union Item #2
        // #4 brick 1 x 2
        object{
            lg_3004
            L_Transform( 1,1,0,1,1,1 )
            texture{
                lg_yellow
            }
            matrix <-0.9999999043076189,0.0,-7.10902327005769e-08,0.0,1.0,0.0,1.5448153967145828e-07,0.0,-0.9999998920065445,0.8000000826730087,0.9600000381469727,-2.575545963168224e-07>
        }
        matrix <-0.5963481664657593,0.0,0.8027259707450867,0.0,1.0,0.0,-0.8027259707450867,0.0,-0.5963481664657593,0.8825509548187256,1.1099963188171387,4.559627056121826>
    }
    scale <-1.000000,1.000000,1.000000>
    rotate <0.000000,180.000000,0.000000>
}




// end of generated file
