/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191006 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_34816: Brick 1 x 2 with Handle on End with trimmes arm                   */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"

#include "lg_3004.inc"


#declare LDX_34816_dot_dat =
union {
// Brick  1 x  2 with Handle on End with Trimmed Arm
// Name: 34816.dat
// Author: Philippe Hurbain [Philo]
// !LDRAW_ORG Part UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
        object {
                lg_3004
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <4,0,0,0,8,0,0,0,4,30,8,0>
        }
        object {
                LDX_2_dash_4cylo_dot_dat_in_part
                matrix <0,0,-6,0,3,0,6,0,0,28.1,5,0>
        }
        object {
                LDX_2_dash_4chrd_dot_dat_in_part
                matrix <0,0,-6,0,1,0,6,0,0,28.1,5,0>
        }
        object {
                LDX_2_dash_4chrd_dot_dat_in_part
                matrix <0,0,-6,0,-1,0,6,0,0,28.1,8,0>
        }
        object {
                LDX_2_dash_4chrd_dot_dat_in_part
                matrix <0,0,-6,0,1,0,6,0,0,28.1,16,0>
        }
        object {
                LDX_2_dash_4chrd_dot_dat_in_part
                matrix <0,0,-6,0,-1,0,6,0,0,28.1,19,0>
        }
        object {
                LDX_2_dash_4cylo_dot_dat_in_part
                matrix <0,0,-6,0,-3,0,6,0,0,28.1,19,0>
        }
        mesh2 {
                vertex_vectors {
                        16,
                        <20,5,-6>, <20,5,6>, <20,8,-6>, <20,8,6>,
                        <20,16,-6>, <20,16,6>, <20,19,-6>, <20,19,6>,
                        <28.1,5,-6>, <28.1,5,6>, <28.1,8,-6>, <28.1,8,6>,
                        <28.1,16,-6>, <28.1,16,6>, <28.1,19,-6>, <28.1,19,6>
                }
                normal_vectors {
                        4,
                        <0,-1,0>, <0,0,-1>, <0,0,1>, <0,1,0>
                }
                face_indices {
                        16,
                        <15, 7, 5>, <15, 5, 13>, <14, 6, 7>, <14, 7, 15>,
                        <12, 4, 6>, <12, 6, 14>, <13, 5, 4>, <13, 4, 12>,
                        <11, 3, 1>, <11, 1, 9>, <10, 2, 3>, <10, 3, 11>,
                        <8, 0, 2>, <8, 2, 10>, <9, 1, 0>, <9, 0, 8>
                }
                normal_indices {
                        16,
                        <1, 1, 1>, <1, 1, 1>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>,
                        <1, 1, 1>, <1, 1, 1>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>
                }
        }
}



#declare lg_34816 = object{
          LDX_34816_dot_dat
          LDXSeamMatrix(54.099998, 28, 20, 7.049999, 10, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
