/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191012 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30249: Slope Brick 55  1 x  6 x  5                                       */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_s_slash_30249s01_dot_dat_in_part = union {
// ~Slope Brick 55  1 x  6 x  5 Subpart without Side Faces
// Name: s\30249s01.dat
// Author: Damien Roux [Darats]
// !LDRAW_ORG Subpart UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-05-28 [Darats] subfiled from patterned part
// !HISTORY 2011-05-28 [Steffen] corrected 4 lines
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// BFC INVERTNEXT
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,0,4,0,4,10>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,0,10>
        }
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <6,0,0,0,1,0,0,0,6,0,0,10>
        }
        object {
                LDX_stud2a_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,-10>
        }
}


#declare LDX_30249_dot_dat =
union {
// Slope Brick 55  1 x  6 x  5
// Name: 30249.dat
// Author: Joseph H. Cardana
// !LDRAW_ORG Part UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-11-28 [Holly-Wood] Tschager Fixed Gap; Corrected L3P -check warnings; Identical lines, Bad vertex sequence; Made BFC compliant; repositioned, regrouped and reordered.
// !HISTORY 2002-12-08 [BrickCaster] origin at top center, removed extra edgeline
// !HISTORY 2003-12-19 [PTadmin] Official Update 2003-03
// !HISTORY 2007-06-07 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-05-28 [Darats] Subpart added
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_s_slash_30249s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        mesh2 {
                vertex_vectors {
                        44,
                        <-10,0,-20>, <-10,0,0>, <-10,0,20>, <-10,116,-100>,
                        <-10,116,20>, <-10,120,-100>, <-10,120,20>, <-6,0,4>,
                        <-6,0,16>, <-6,4,-20>, <-6,4,4>, <-6,4,16>,
                        <-6,65,-61>, <-6,69,-64>, <-6,116,-96>, <-6,120,-96>,
                        <-6,120,-64>, <-6,120,-61>, <-6,120,-20>, <-6,120,16>,
                        <-4,4,6>, <-4,4,14>, <4,4,6>, <4,4,14>,
                        <6,0,4>, <6,0,16>, <6,4,-20>, <6,4,4>,
                        <6,4,16>, <6,65,-61>, <6,69,-64>, <6,116,-96>,
                        <6,120,-96>, <6,120,-64>, <6,120,-61>, <6,120,-20>,
                        <6,120,16>, <10,0,-20>, <10,0,0>, <10,0,20>,
                        <10,116,-100>, <10,116,20>, <10,120,-100>, <10,120,20>
                }
                normal_vectors {
                        9,
                        <-1,0,0>, <0,-1,0>, <0,-0.562791,-0.826599>, <0,-0.557836,-0.829951>,
                        <0,0,-1>, <0,0,1>, <0,0.567733,0.823213>, <0,1,0>,
                        <1,0,0>
                }
                face_indices {
                        68,
                        <5, 15, 32>, <5, 32, 42>, <15, 5, 6>, <15, 6, 19>,
                        <19, 6, 43>, <19, 43, 36>, <42, 32, 36>, <42, 36, 43>,
                        <16, 17, 34>, <16, 34, 33>, <15, 14, 31>, <15, 31, 32>,
                        <13, 14, 15>, <13, 15, 16>, <13, 16, 33>, <13, 33, 30>,
                        <30, 33, 32>, <30, 32, 31>, <12, 29, 34>, <12, 34, 17>,
                        <17, 18, 9>, <17, 9, 12>, <19, 11, 9>, <19, 9, 18>,
                        <19, 36, 28>, <19, 28, 11>, <36, 35, 26>, <36, 26, 28>,
                        <34, 29, 26>, <34, 26, 35>, <13, 30, 31>, <13, 31, 14>,
                        <12, 9, 26>, <12, 26, 29>, <10, 27, 26>, <10, 26, 9>,
                        <10, 11, 21>, <10, 21, 20>, <28, 23, 21>, <28, 21, 11>,
                        <28, 27, 22>, <28, 22, 23>, <10, 20, 22>, <10, 22, 27>,
                        <3, 5, 42>, <3, 42, 40>, <2, 39, 43>, <2, 43, 6>,
                        <3, 40, 37>, <3, 37, 0>, <1, 0, 37>, <1, 37, 38>,
                        <1, 7, 8>, <1, 8, 2>, <39, 2, 8>, <39, 8, 25>,
                        <39, 25, 24>, <39, 24, 38>, <1, 38, 24>, <1, 24, 7>,
                        <4, 6, 5>, <4, 5, 3>, <2, 4, 3>, <2, 3, 0>,
                        <41, 40, 42>, <41, 42, 43>, <39, 37, 40>, <39, 40, 41>
                }
                normal_indices {
                        68,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <4, 4, 4>, <4, 4, 4>,
                        <0, 0, 0>, <0, 0, 0>, <5, 5, 5>, <5, 5, 5>,
                        <8, 8, 8>, <8, 8, 8>, <4, 4, 4>, <4, 4, 4>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <5, 5, 5>, <5, 5, 5>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <2, 2, 2>, <2, 2, 2>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <5, 5, 5>, <5, 5, 5>, <4, 4, 4>, <4, 4, 4>,
                        <6, 6, 6>, <6, 6, 6>, <7, 7, 7>, <7, 7, 7>,
                        <7, 7, 7>, <7, 7, 7>, <7, 7, 7>, <7, 7, 7>,
                        <7, 7, 7>, <7, 7, 7>, <7, 7, 7>, <7, 7, 7>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>
                }
        }
}


#declare lg_30249 = object{
          LDX_30249_dot_dat
          LDXSeamMatrix(20, 124, 120, 0, 58, -40)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
