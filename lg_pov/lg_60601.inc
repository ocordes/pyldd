/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_60601: glass for window 1 x 2 x 2 without sill                           */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_60601_dot_dat =
union {
// Glass for Window  1 x  2 x  2 without Sill
// Name: 60601.dat
// Author: Michael Heidemann [mikeheide]
// !LDRAW_ORG Part UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-12-31 [PTadmin] Official Update 2010-03
// !HISTORY 2012-03-06 [gregteft] Updated to increase primitive use and correct inset for glass.
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                LDX_2_dash_4cylo_dot_dat_in_part
                matrix <2,0,0,0,0,4,0,-2,0,0,4,-7>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <2,0,0,0,0,1,0,-2,0,0,4,-7>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <-2,0,0,0,0,-1,0,-2,0,0,4,-3>
        }
        object {
                LDX_2_dash_4cylo_dot_dat_in_part
                matrix <-2,0,0,0,0,4,0,2,0,0,39,-7>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <-2,0,0,0,0,1,0,2,0,0,39,-7>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <2,0,0,0,0,-1,0,2,0,0,39,-3>
        }
        mesh2 {
                vertex_vectors {
                        16,
                        <-16.5,4,-7>, <-16.5,4,-3>, <-16.5,39,-7>, <-16.5,39,-3>,
                        <-2,4,-7>, <-2,4,-3>, <-2,39,-7>, <-2,39,-3>,
                        <2,4,-7>, <2,4,-3>, <2,39,-7>, <2,39,-3>,
                        <16.5,4,-7>, <16.5,4,-3>, <16.5,39,-7>, <16.5,39,-3>
                }
                normal_vectors {
                        6,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <0,1,0>, <1,0,0>
                }
                face_indices {
                        24,
                        <12, 14, 15>, <12, 15, 13>, <15, 11, 9>, <15, 9, 13>,
                        <14, 10, 11>, <14, 11, 15>, <12, 8, 10>, <12, 10, 14>,
                        <13, 9, 8>, <13, 8, 12>, <2, 0, 1>, <2, 1, 3>,
                        <1, 5, 7>, <1, 7, 3>, <0, 4, 5>, <0, 5, 1>,
                        <2, 6, 4>, <2, 4, 0>, <3, 7, 6>, <3, 6, 2>,
                        <5, 9, 11>, <5, 11, 7>, <8, 4, 6>, <8, 6, 10>
                }
                normal_indices {
                        24,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <1, 1, 1>, <1, 1, 1>, <3, 3, 3>, <3, 3, 3>,
                        <4, 4, 4>, <4, 4, 4>, <5, 5, 5>, <5, 5, 5>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>
                }
        }
}


#declare lg_60601 = object{

          LDX_60601_dot_dat
          LDXSeamMatrix(33, 39, 4, 0, 21.5, -5)

          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*90
}
