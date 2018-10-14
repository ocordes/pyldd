/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180929 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_91049: plate 1.5 x 1.5 x 2/3 round                                       */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"

#declare LDX_91049_dot_dat =
union {
// Plate  1.5 x  1.5 x  0.667 Round
// Name: 91049.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Part UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <6,0,0,0,-1,0,0,0,-6,0,3,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,9,0,0,0,6,0,3,0>
        }
        object {
                LDX_stud4a_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,0,12,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,3,0,0,0,8,0,9,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <13.75,0,0,0,2,0,0,0,13.75,0,9,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <4,0,0,0,-1,0,0,0,-4,0,9,0>
        }
        object {
                LDX_4_dash_4rin24_dot_dat_in_part
                matrix <0.5,0,0,0,-1,0,0,0,-0.5,0,9,0>
        }
        object {
                LDX_4_dash_4rin10_dot_dat_in_part
                matrix <1.25,0,0,0,-1,0,0,0,-1.25,0,9,0>
        }
        object {
                LDX_4_dash_4rin22_dot_dat_in_part
                matrix <0.625,0,0,0,-1,0,0,0,-0.625,0,11,0>
        }
        object {
                LDX_4_dash_4rin31_dot_dat_in_part
                matrix <0.460937,0,0,0,-1,0,0,0,-0.460937,0,11,0>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <14.75,0,0,0,7,0,0,0,14.75,0,4,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <13.75,0,0,0,2,0,0,0,13.75,0,4,0>
        }
        object {
                LDX_4_dash_4rin31_dot_dat_in_part
                matrix <0.460937,0,0,0,1,0,0,0,0.460937,0,4,0>
        }
        object {
                LDX_4_dash_4rin22_dot_dat_in_part
                matrix <0.625,0,0,0,1,0,0,0,0.625,0,4,0>
        }
        object {
                LDX_4_dash_4rin10_dot_dat_in_part
                matrix <1.25,0,0,0,2,0,0,0,1.25,0,6,0>
        }
        object {
                LDX_4_dash_4ring4_dot_dat_in_part
                matrix <2.5,0,0,0,2,0,0,0,2.5,0,6,0>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <10,0,0,0,6,0,0,0,10,0,0,0>
        }
        object {
                LDX_4_dash_4ring9_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <3,0,0,0,1,0,0,0,3,0,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        mesh2 {
                vertex_vectors {
                        25,
                        <-3.866025,3,-4.696>, <-3.866025,3,4.696>, <-3.866025,12,-4.696>, <-3.866025,12,4.696>,
                        <-2.866025,3,-2.96395>, <-2.866025,3,2.96395>, <-2.866025,12,-2.96395>, <-2.866025,12,2.96395>,
                        <-2.133975,3,-5.696>, <-2.133975,3,5.696>, <-2.133975,12,-5.696>, <-2.133975,12,5.696>,
                        <-1.133975,3,-3.96395>, <-1.133975,3,3.96395>, <-1.133975,12,-3.96395>, <-1.133975,12,3.96395>,
                        <4,3,-1>, <4,3,1>, <4,12,-1>, <4,12,1>,
                        <5.801,3,-1>, <5.801,3,1>, <5.801,12,-1>, <5.801,12,1>,
                        <6,12,0>
                }
                normal_vectors {
                        10,
                        <-0.866025,0,-0.5>, <-0.866025,0,0.5>, <-0.5,0,-0.866025>, <-0.5,0,0.866025>,
                        <0,-1,0>, <0,0,-1>, <0,0,1>, <0.866025,0,-0.5>,
                        <0.866025,0,0.5>, <1,0,0>
                }
                face_indices {
                        25,
                        <16, 17, 19>, <16, 19, 18>, <19, 23, 22>, <19, 22, 18>,
                        <17, 21, 23>, <17, 23, 19>, <18, 22, 20>, <18, 20, 16>,
                        <23, 24, 22>, <13, 5, 7>, <13, 7, 15>, <7, 3, 11>,
                        <7, 11, 15>, <5, 1, 3>, <5, 3, 7>, <15, 11, 9>,
                        <15, 9, 13>, <4, 12, 14>, <4, 14, 6>, <14, 10, 2>,
                        <14, 2, 6>, <12, 8, 10>, <12, 10, 14>, <6, 2, 0>,
                        <6, 0, 4>
                }
                normal_indices {
                        25,
                        <9, 9, 9>, <9, 9, 9>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <6, 6, 6>, <6, 6, 6>,
                        <4, 4, 4>, <3, 3, 3>, <3, 3, 3>, <4, 4, 4>,
                        <4, 4, 4>, <8, 8, 8>, <8, 8, 8>, <0, 0, 0>,
                        <0, 0, 0>, <2, 2, 2>, <2, 2, 2>, <4, 4, 4>,
                        <4, 4, 4>, <1, 1, 1>, <1, 1, 1>, <7, 7, 7>,
                        <7, 7, 7>
                }
        }
}


#declare lg_91049 = object{
          LDX_91049_dot_dat
          LDXSeamMatrix(29.5, 20, 29.5, 0, 6, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
