/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3900: minifig signal holder (stop sign)                                  */
/*                                                                             */
/*******************************************************************************/

#include "LDX.inc"


#declare LDX_s_slash_3900s01_dot_dat_in_part = union {
// ~Minifig Signal Holder without Rear Surface
// Name: s\3900s01.dat
// Author: Paul Easter [pneaster]
// !LDRAW_ORG Subpart UPDATE 2014-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !HISTORY 2014-05-29 [smr] moved holder from 3900 to s\3900s01.dat
// !HISTORY 2014-06-21 [PTadmin] Official Update 2014-01
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <14,0,0,0,4,0,0,0,14,0,0,0>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <14,0,0,0,1,0,0,0,-14,0,0,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,0,22,0,-4,0,0,2,-50>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,0,1,0,4,0,0,2,-50>
        }
        object {
                LDX_1_dash_4cyls_dot_dat_in_part
                matrix <0,4,0,0,0,29.25,-4,0,0,0,2,-28>
        }
        object {
                LDX_1_dash_4cyls_dot_dat_in_part
                matrix <0,4,0,0,0,29.25,4,0,0,0,2,-28>
        }
        object {
                LDX_1_dash_4cyls_dot_dat_in_part
                matrix <0,-4,0,0,0,29.25,-4,0,0,0,2,-28>
        }
        object {
                LDX_1_dash_4cyls_dot_dat_in_part
                matrix <0,-4,0,0,0,29.25,4,0,0,0,2,-28>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <-4,0,0,0,-1,0,0,4,-29.25,0,2,1.25>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,-4,-29.25,0,2,1.25>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,-1,0,1,0,1,0,0,0,0,0>
        }
}


#declare LDX_3900_dot_dat =
union {
// Minifig Signal Holder
// Name: 3900.dat
// Author: Paul Easter [pneaster]
// !LDRAW_ORG Part UPDATE 2014-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !CATEGORY Minifig Accessory
// !KEYWORDS sign, paddle, town
// !HISTORY 2001-11-23 [pneaster] corrected BFC use of primitive files.
// !HISTORY 2001-11-30 [PTadmin] Official Update 2001-02
// !HISTORY 2007-06-30 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-05-29 [smr] moved holder from 3900 to s\3900s01.dat
// !HISTORY 2014-06-21 [PTadmin] Official Update 2014-01
object {
        LDX_s_slash_3900s01_dot_dat_in_part
        matrix <1,0,0,0,1,0,0,0,1,0,0,0>
}
object {
        LDX_4_dash_4disc_dot_dat_in_part
        matrix <14,0,0,0,-1,0,0,0,14,0,4,0>
}
}



#declare lg_3900 =
object{
    LDX_3900_dot_dat
    LDXSeamMatrix(28, 10, 64, 0, 1, -18)

    scale 1/25.
    rotate x*180
    rotate y*180
    rotate z*90
}
