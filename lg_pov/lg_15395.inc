/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170620 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_15395: Dome 2 x 2 Inverted with Stud and Tube                            */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_15395)
#else
#include "15395.inc"

#declare lg_15395 = 
	object { _15395 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#declare lg_15395_clear = 
	object { _15395 rotate <90,90,0> transform {L3LgeoToLDraw inverse} }

#end