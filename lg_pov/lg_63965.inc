/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20190927 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_63965: Bar 6L with thick stop                                            */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_63965_dot_dat =
union {
// Bar  6L with Thick Stop
// Name: 63965.dat
// Author: El'dar Ismagilov [Eldar]
// !LDRAW_ORG Part UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !KEYWORDS star wars, town, umbrella, stand, small, rod, pole, missile
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
        object {
                LDX_4_dash_4cylc_dot_dat_in_part
                matrix <0,0,4,0,95,0,4,0,0,0,-102.5,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <0,0,2,0,2,0,2,0,0,0,-7.5,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <0,0,6,0,7.5,0,6,0,0,0,-7.5,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <0,0,2,0,-2,0,-2,0,0,0,0,0>
        }
        object {
                LDX_4_dash_4cylc_dot_dat_in_part
                matrix <0,0,4,0,-18,0,-4,0,0,0,18,0>
        }
}

#declare lg_63965 = object{
          LDX_63965_dot_dat
          LDXSeamMatrix(12, 120.5, 12, 0, -42.25, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
