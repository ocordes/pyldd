/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20160301 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_86500: Dome 4 x 4 Smooth                                                 */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_86500)
#else
#include "86500.inc"

#declare lg_86500 = 
	object { _86500 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#declare lg_86500_clear = 
	object { _86500 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#end