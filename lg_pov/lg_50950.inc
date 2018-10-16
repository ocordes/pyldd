/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170507 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50950: Slope Brick Curved 3 x 1                                          */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_50950)
#else
#include "50950.inc"

#declare lg_50950 = 
	object { _50950 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90 }

#declare lg_50950_clear = 
	object { _50950 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90 }

#end
