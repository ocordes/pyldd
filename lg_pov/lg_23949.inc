/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191012 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_23949: Slope Brick 45 2 x 6                                              */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_23949_dot_dat =
union {
// Slope Brick 45  2 x  6
// Name: 23949.dat
// Author: Rolf Osterthun [Rolf]
// !LDRAW_ORG Part UPDATE 2017-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2017-12-10 [MagFors] Used more primitives
// !HISTORY 2017-12-30 [PTadmin] Official Update 2017-01
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-3,0,0,0,1,40,12,-10>
        }
        object {
                LDX_stud4s2_dot_dat_in_part
                matrix <0,0,-1,0,8,0,1,0,0,40,12,-10>
        }
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-3,0,0,0,1,20,12,-10>
        }
        object {
                LDX_stud4s2_dot_dat_in_part
                matrix <0,0,-1,0,8,0,1,0,0,20,12,-10>
        }
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-3,0,0,0,1,0,12,-10>
        }
        object {
                LDX_stud4s2_dot_dat_in_part
                matrix <0,0,-1,0,8,0,1,0,0,0,12,-10>
        }
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-3,0,0,0,1,-20,12,-10>
        }
        object {
                LDX_stud4s2_dot_dat_in_part
                matrix <0,0,-1,0,8,0,1,0,0,-20,12,-10>
        }
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-3,0,0,0,1,-40,12,-10>
        }
        object {
                LDX_stud4s2_dot_dat_in_part
                matrix <0,0,-1,0,8,0,1,0,0,-40,12,-10>
        }
// BFC INVERTNEXT
// BFC INVERTNEXT
        object {
                LDX_stug_dash_1x6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
// // top surface
        mesh2 {
                vertex_vectors {
                        20,
                        <-60,0,-10>, <-60,0,10>, <-60,20,-30>, <-60,24,-30>,
                        <-60,24,10>, <-56,4,-10>, <-56,4,6>, <-56,20,-26>,
                        <-56,24,-26>, <-56,24,6>, <56,4,-10>, <56,4,6>,
                        <56,20,-26>, <56,24,-26>, <56,24,6>, <60,0,-10>,
                        <60,0,10>, <60,20,-30>, <60,24,-30>, <60,24,10>
                }
                normal_vectors {
                        7,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <0,0.707107,0.707107>, <0,1,0>, <1,0,0>
                }
                face_indices {
                        36,
                        <19, 14, 9>, <19, 9, 4>, <4, 9, 8>, <4, 8, 3>,
                        <3, 8, 13>, <3, 13, 18>, <18, 13, 14>, <18, 14, 19>,
                        <12, 10, 5>, <12, 5, 7>, <12, 7, 8>, <12, 8, 13>,
                        <6, 5, 10>, <6, 10, 11>, <6, 11, 14>, <6, 14, 9>,
                        <14, 13, 12>, <14, 12, 11>, <11, 12, 10>, <9, 6, 7>,
                        <9, 7, 8>, <6, 5, 7>, <1, 0, 15>, <1, 15, 16>,
                        <1, 16, 19>, <1, 19, 4>, <3, 18, 17>, <3, 17, 2>,
                        <19, 16, 17>, <19, 17, 18>, <16, 15, 17>, <4, 3, 2>,
                        <4, 2, 1>, <1, 2, 0>, <17, 15, 0>, <17, 0, 2>
                }
                normal_indices {
                        36,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <4, 4, 4>, <4, 4, 4>, <3, 3, 3>, <3, 3, 3>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <6, 6, 6>, <6, 6, 6>, <6, 6, 6>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <5, 5, 5>, <5, 5, 5>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <6, 6, 6>,
                        <6, 6, 6>, <6, 6, 6>, <4, 4, 4>, <4, 4, 4>
                }
        }
}


#declare lg_23949 = object{
          LDX_23949_dot_dat
          LDXSeamMatrix(120, 28, 40, 0, 10, -10)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
