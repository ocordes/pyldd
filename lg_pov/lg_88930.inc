/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170916 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_88930: Slope Brick Curved 2 x 4 with Underside Studs                     */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_88930)
#else
#include "88930.inc"

#declare lg_88930 = 
	object { _88930 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#declare lg_88930_clear = 
	object { _88930 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#end