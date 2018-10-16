/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170506 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_11477: Slope Brick Curved 2 x 1                                          */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_11477)
#else
#include "11477.inc"

#declare lg_11477 = 
	object { _11477 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90}

#declare lg_11477_clear = 
	object { _11477 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90 }

#end
