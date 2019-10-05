/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180929 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_57895: Glass for window 1 x 4 x 6                                        */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_s_slash_57895s01_dot_dat_in_part = union {
// ~Glass for Window  1 x  4 x  6 without Front
// Name: s\57895s01.dat
// Author: Philippe Hurbain [Philo]
// !LDRAW_ORG Subpart UPDATE 2012-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-10-06 [Philo] Subparted from mikeheide's original file
// !HISTORY 2012-12-28 [PTadmin] Official Update 2012-03
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <2,0,0,0,2,0,0,0,2,32.5,0,0>
        }
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <2,0,0,0,2,0,0,0,2,-32.5,0,0>
        }
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <2,0,0,0,-2,0,0,0,2,32.5,131.5,0>
        }
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <2,0,0,0,-2,0,0,0,2,-32.5,131.5,0>
        }
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,32.5,0,0>
        }
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,-32.5,0,0>
        }
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,32.5,131.5,0>
        }
        object {
                LDX_4_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,-32.5,131.5,0>
        }
}


#declare LDX_57895_dot_dat =
union {
// Glass for Window  1 x  4 x  6
// Name: 57895.dat
// Author: Michael Heidemann [mikeheide]
// !LDRAW_ORG Part UPDATE 2012-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// !HELP Position in 57894 frame: Y=4.5, Z=-3
// !HELP Position in 60596 frame: Y=4.5, Z=5
// BFC CERTIFY CCW
// !HISTORY 2008-08-25 {LEGO Universe Team} Original part shape
// !HISTORY 2009-01-24 [mikeheide] File preparation for LDraw Parts Tracker
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
// !HISTORY 2012-10-06 [Philo] Subparted for patterns
// !HISTORY 2012-12-28 [PTadmin] Official Update 2012-03
        object {
                LDX_s_slash_57895s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        mesh2 {
                vertex_vectors {
                        24,
                        <-36.25,0,-2>, <-36.25,0,2>, <-36.25,131.5,-2>, <-36.25,131.5,2>,
                        <-34.5,0,-2>, <-34.5,0,2>, <-34.5,131.5,-2>, <-34.5,131.5,2>,
                        <-30.5,0,-2>, <-30.5,0,2>, <-30.5,131.5,-2>, <-30.5,131.5,2>,
                        <30.5,0,-2>, <30.5,0,2>, <30.5,131.5,-2>, <30.5,131.5,2>,
                        <34.5,0,-2>, <34.5,0,2>, <34.5,131.5,-2>, <34.5,131.5,2>,
                        <36.25,0,-2>, <36.25,0,2>, <36.25,131.5,-2>, <36.25,131.5,2>
                }
                normal_vectors {
                        8,
                        <-1,0,0>, <0,-1,0>, <0,-1,0>, <0,0,-1>,
                        <0,0,1>, <0,1,0>, <0,1,0>, <1,0,0>
                }
                face_indices {
                        20,
                        <4, 5, 1>, <4, 1, 0>, <9, 8, 12>, <9, 12, 13>,
                        <17, 16, 20>, <17, 20, 21>, <7, 6, 2>, <7, 2, 3>,
                        <10, 11, 15>, <10, 15, 14>, <18, 19, 23>, <18, 23, 22>,
                        <1, 21, 23>, <1, 23, 3>, <21, 20, 22>, <21, 22, 23>,
                        <3, 2, 0>, <3, 0, 1>, <22, 20, 0>, <22, 0, 2>
                }
                normal_indices {
                        20,
                        <5, 5, 5>, <5, 5, 5>, <5, 6, 5>, <5, 5, 6>,
                        <5, 5, 5>, <5, 5, 5>, <1, 1, 1>, <1, 1, 1>,
                        <1, 2, 1>, <1, 1, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
                        <7, 7, 7>, <7, 7, 7>, <4, 4, 4>, <4, 4, 4>
                }
        }
}


#declare lg_57895 = object{
          LDX_57895_dot_dat
          LDXSeamMatrix(72.5, 133.5, 4, 0, 65.75, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
