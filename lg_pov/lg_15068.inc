/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150717 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_15068: Slope Brick Curved 2 x 2 x 0.667                                  */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_15068)
#else
#include "15068.inc"

#declare lg_15068 = 
	object { _15068 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90 }

#declare lg_15068_clear = 
	object { _15068 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*-90 }

#end
