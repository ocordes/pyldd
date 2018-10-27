/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170417 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_98138: Tile 1 x 1 Round with Groove                                      */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_98138)
#else
#include "98138.inc"

#declare lg_98138 = 
	object { _98138 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#declare lg_98138_clear = 
	object { _98138 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#end