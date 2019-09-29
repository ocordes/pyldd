/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20190928 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32952: brick 1 x 1 x 1 2/3 with studs on 1 side                          */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_32952_dot_dat =
union {
// Brick  1 x  1 x  1.667 with Studs on 1 Side
// Name: 32952.dat
// Author: Gerald Lasser [GeraldLasser]
// !LDRAW_ORG Part UPDATE 2017-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2017-12-30 [PTadmin] Official Update 2017-01
// BFC INVERTNEXT
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <0,0,-1,0,1,0,1,0,0,0,0,0>
        }
        object {
                LDX_stug2_dash_1x2_dot_dat_in_part
                matrix <0,1,0,0,0,1,1,0,0,0,20,-10>
        }
        mesh2 {
                vertex_vectors {
                        16,
                        <-10,0,-10>, <-10,0,10>, <-10,40,-10>, <-10,40,10>,
                        <-6,4,-6>, <-6,4,6>, <-6,40,-6>, <-6,40,6>,
                        <6,4,-6>, <6,4,6>, <6,40,-6>, <6,40,6>,
                        <10,0,-10>, <10,0,10>, <10,40,-10>, <10,40,10>
                }
                normal_vectors {
                        5,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <1,0,0>
                }
                face_indices {
                        28,
                        <5, 9, 8>, <5, 8, 4>, <5, 7, 11>, <5, 11, 9>,
                        <4, 6, 7>, <4, 7, 5>, <8, 10, 6>, <8, 6, 4>,
                        <9, 11, 10>, <9, 10, 8>, <15, 11, 7>, <15, 7, 3>,
                        <3, 7, 6>, <3, 6, 2>, <2, 6, 10>, <2, 10, 14>,
                        <14, 10, 11>, <14, 11, 15>, <1, 13, 12>, <1, 12, 0>,
                        <1, 3, 15>, <1, 15, 13>, <0, 2, 3>, <0, 3, 1>,
                        <12, 14, 2>, <12, 2, 0>, <13, 15, 14>, <13, 14, 12>
                }
                normal_indices {
                        28,
                        <1, 1, 1>, <1, 1, 1>, <3, 3, 3>, <3, 3, 3>,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <4, 4, 4>, <4, 4, 4>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>
                }
        }
}

#declare lg_32952 = object{
          LDX_32952_dot_dat
          LDXSeamMatrix(20, 44, 24, 0, 18, -2)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
