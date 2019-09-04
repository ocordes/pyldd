/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20190904 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_43888: column 1 x 1 x 6                                                  */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_43888_dot_dat =
union {
// Brick  1 x  1 x  6 Round with Square Base
// Name: 43888.dat
// Author: Stig-Erik Blomqvist [stigge72]
// !LDRAW_ORG Part UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2006-06-25 [WilliamH] Secondary author
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <10,0,0,0,1,0,0,0,10,0,120,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <6,0,0,0,-1,0,0,0,-6,0,124,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,120,0,0,0,6,0,4,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,2,0,4,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,0,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <10,0,0,0,120,0,0,0,10,0,0,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,0,0>
        }
        object {
                LDX_4_dash_4ring4_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,0,0>
        }
        object {
                LDX_stud2a_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        mesh2 {
                vertex_vectors {
                        20,
                        <-10,120,-10>, <-10,120,10>, <-10,144,-10>, <-10,144,10>,
                        <-6,124,-6>, <-6,124,6>, <-6,144,-10>, <-6,144,-6>,
                        <-6,144,6>, <-6,144,10>, <6,124,-6>, <6,124,6>,
                        <6,144,-10>, <6,144,-6>, <6,144,6>, <6,144,10>,
                        <10,120,-10>, <10,120,10>, <10,144,-10>, <10,144,10>
                }
                normal_vectors {
                        5,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <1,0,0>
                }
                face_indices {
                        24,
                        <2, 3, 9>, <2, 9, 6>, <6, 7, 13>, <6, 13, 12>,
                        <8, 9, 15>, <8, 15, 14>, <12, 15, 19>, <12, 19, 18>,
                        <3, 1, 17>, <3, 17, 19>, <2, 0, 1>, <2, 1, 3>,
                        <18, 16, 0>, <18, 0, 2>, <19, 17, 16>, <19, 16, 18>,
                        <8, 5, 11>, <8, 11, 14>, <7, 4, 5>, <7, 5, 8>,
                        <13, 10, 4>, <13, 4, 7>, <14, 11, 10>, <14, 10, 13>
                }
                normal_indices {
                        24,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>
                }
        }
}


#declare lg_43888 = object{
          LDX_43888_dot_dat
          LDXSeamMatrix(20, 148, 20, 0, 70, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
