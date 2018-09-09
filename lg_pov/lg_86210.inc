/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_86210: glass for window 1 x 4 x 3 opening                                */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_86210_dot_dat_sub_part =
union {
// Glass for Window  1 x  4 x  3 Opening
// Name: 86210.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Part UPDATE 2010-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !KEYWORDS 4132, 60594, 60598, 60806
// !HISTORY 2009-10-13 {The LEGO Universe Team} Original part shape
// !HISTORY 2010-06-06 [MagFors] File preparation for LDraw Parts Tracker
// !HISTORY 2010-12-31 [PTadmin] Official Update 2010-03
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <0,0,2,2,0,0,0,2,0,-36,0,0>
        }
        object {
                LDX_4_dash_4ring1_dot_dat_in_part
                matrix <0,0,-2,1,0,0,0,-2,0,-36,0,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <0,0,4,1,0,0,0,4,0,-36,0,0>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <0,0,-4,2.5,0,0,0,-4,0,-36,0,0>
        }
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <0,2.8284,-2.8284,5,0,0,0,-2.8284,-2.8284,-33.5,0,0>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <0,0,4,-1,0,0,0,4,0,-28.5,0,0>
        }
// //
        object {
                LDX_bump5000_dot_dat_in_part
                matrix <0,2,0,-2,0,0,0,0,2,36,0,0>
        }
        object {
                LDX_4_dash_4ring1_dot_dat_in_part
                matrix <0,0,2,-1,0,0,0,-2,0,36,0,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <0,0,-4,-1,0,0,0,4,0,36,0,0>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <0,0,4,-2.5,0,0,0,-4,0,36,0,0>
        }
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <0,2.8284,2.8284,-5,0,0,0,-2.8284,2.8284,33.5,0,0>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <0,0,4,1,0,0,0,4,0,28.5,0,0>
        }
// //
}



#declare lg_86210 = object{

      LDX_86210_dot_dat_sub_part
      LDXSeamMatrix(74, 60, 8, 0, 26, 0)

      scale 1/25.
      rotate x*-90
      //rotate y*180
      rotate z*90
}
