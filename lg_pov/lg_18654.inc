/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191012 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_18654: Technic beam 1                                                    */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_18654_dot_dat =
union {
// Technic Beam  1
// Name: 18654.dat
// Author: Owen Burgoyne [C3POwen]
// !LDRAW_ORG Part UPDATE 2015-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2015-10-11 [PTadmin] Official Update 2015-01
        object {
                LDX_connhole_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <9,0,0,0,20,0,0,0,9,0,-10,0>
        }
}


#declare lg_18654 = object{
          LDX_18654_dot_dat
          LDXSeamMatrix(18, 20, 18, 0, 0, 0)
          scale 1/25.
          //rotate x*-90
          //rotate y*180
          rotate z*-90
}
