/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191010 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6269: Crystal Cup                                                        */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_6269_dot_dat =
union {
// Minifig Goblet with Hollow Stem
// Name: 6269.dat
// Author: J.C. Tchang [tchang]
// !LDRAW_ORG Part UPDATE 2013-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !CATEGORY Minifig Accessory
// !KEYWORDS Castle, Town, utensil, cup, chalice, glass, wine, crystal
// !KEYWORDS fine crystal, treasure, exhaust pipe, cone
// !HISTORY 2009-10-12 [tchang] Rebuild from 2343, Change shape, Add inner hole and cylinder part
// !HISTORY 2013-12-23 [PTadmin] Official Update 2013-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,5,0,0,0,8,0,0,0>
        }
// //
        object {
                LDX_4_dash_4rin15_dot_dat_in_part
                matrix <0.5,0,0,0,1,0,0,0,0.5,0,5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4con4_dot_dat_in_part
                matrix <1.5,0,0,0,11,0,0,0,1.5,0,5,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,16,0>
        }
        object {
                LDX_4_dash_4ring1_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,16,0>
        }
// //
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <2,0,0,0,18,0,0,0,2,0,16,0>
        }
        object {
                LDX_t04i5000_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,34,0>
        }
        object {
                LDX_t04i5000_dot_dat_in_part
                matrix <0,0,4,0,4,0,-4,0,0,0,34,0>
        }
        object {
                LDX_t04i5000_dot_dat_in_part
                matrix <-4,0,0,0,4,0,0,0,-4,0,34,0>
        }
        object {
                LDX_t04i5000_dot_dat_in_part
                matrix <0,0,-4,0,4,0,4,0,0,0,34,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,2,0,36,0>
        }
// //
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,36,0>
        }
// //
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <3,0,0,0,-1,0,0,0,3,0,40,0>
        }
        object {
                LDX_4_dash_4ring9_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,0,40,0>
        }
// //
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <10,0,0,0,4,0,0,0,10,0,36,0>
        }
        object {
                LDX_t04o6667_dot_dat_in_part
                matrix <0,0,6,0,-6,0,-6,0,0,0,36,0>
        }
        object {
                LDX_t04o6667_dot_dat_in_part
                matrix <-6,0,0,0,-6,0,0,0,-6,0,36,0>
        }
        object {
                LDX_t04o6667_dot_dat_in_part
                matrix <0,0,-6,0,-6,0,6,0,0,0,36,0>
        }
        object {
                LDX_t04o6667_dot_dat_in_part
                matrix <6,0,0,0,-6,0,0,0,6,0,36,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,32,0>
        }
// //
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,14,0,0,0,4,0,18,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,2,0,18,0>
        }
        object {
                LDX_t04o1667_dot_dat_in_part
                matrix <6,0,0,0,6,0,0,0,6,0,17,0>
        }
        object {
                LDX_t04o1667_dot_dat_in_part
                matrix <0,0,6,0,6,0,-6,0,0,0,17,0>
        }
        object {
                LDX_t04o1667_dot_dat_in_part
                matrix <-6,0,0,0,6,0,0,0,-6,0,17,0>
        }
        object {
                LDX_t04o1667_dot_dat_in_part
                matrix <0,0,-6,0,6,0,6,0,0,0,17,0>
        }
// //
        object {
                LDX_4_dash_4con4_dot_dat_in_part
                matrix <1.75,0,0,0,10,0,0,0,1.75,0,7,0>
        }
        object {
                LDX_4_dash_4con7_dot_dat_in_part
                matrix <1.25,0,0,0,7,0,0,0,1.25,0,0,0>
        }
        object {
                LDX_4_dash_4ring4_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,0,0>
        }
// //
}


#declare lg_6269 = object{
          LDX_6269_dot_dat
          LDXSeamMatrix(20.000401, 40, 20.000401, 0, 20, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
