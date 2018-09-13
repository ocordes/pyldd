/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_44336: baseplate 32 x 32 road 6-stud straight                            */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_44336_dot_dat =
union {
// Baseplate 32 x 32 Road 6-Stud Straight
// Name: 44336.dat
// Author: Chris Dee [cwdee]
// !LDRAW_ORG Part UPDATE 2009-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !KEYWORDS roadplate, 6-stud, straight
// !HISTORY 2009-05-02 [PTadmin] Official Update 2009-01
        object {
                LDX_s_slash_3811s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,0,4,316,0,316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-4,0,0,0,1,0,0,0,4,-316,0,316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-4,0,0,0,1,0,0,0,-4,-316,0,-316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,0,-4,316,0,-316>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,260>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,140>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,20>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,-100>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,-220>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,300,0,-300>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,260,0,-300>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,220,0,-300>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,260>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,140>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,20>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,-100>
        }
        object {
                LDX_stug6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,-220>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-300,0,-300>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-260,0,-300>
        }
        object {
                LDX_stug2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-220,0,-300>
        }
        mesh2 {
                vertex_vectors {
                        24,
                        <-320,0,-316>, <-320,0,316>, <-320,4,-316>, <-320,4,316>,
                        <-316,0,-320>, <-316,0,-316>, <-316,0,316>, <-316,0,320>,
                        <-316,4,-320>, <-316,4,-316>, <-316,4,316>, <-316,4,320>,
                        <316,0,-320>, <316,0,-316>, <316,0,316>, <316,0,320>,
                        <316,4,-320>, <316,4,-316>, <316,4,316>, <316,4,320>,
                        <320,0,-316>, <320,0,316>, <320,4,-316>, <320,4,316>
                }
                normal_vectors {
                        3,
                        <0,0,-1>, <0,1,0>, <1,0,0>
                }
                face_indices {
                        20,
                        <11, 7, 15>, <11, 15, 19>, <22, 20, 21>, <22, 21, 23>,
                        <8, 4, 12>, <8, 12, 16>, <2, 0, 1>, <2, 1, 3>,
                        <18, 19, 11>, <18, 11, 10>, <9, 8, 16>, <9, 16, 17>,
                        <23, 3, 2>, <23, 2, 22>, <6, 1, 0>, <6, 0, 5>,
                        <13, 20, 21>, <13, 21, 14>, <12, 15, 7>, <12, 7, 4>
                }
                normal_indices {
                        20,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>
                }
        }
}



#declare lg_44336 = object{

            LDX_44336_dot_dat
            LDXSeamMatrix(640, 8, 640, 0, 0, 0)
            scale 1/25.
            rotate x*-90
            //rotate y*180
            //rotate z*-90
}
