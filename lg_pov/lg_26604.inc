/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170422 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_26604: Brick 1 x 1 with Studs on Two Adjacent Sides                      */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_26604)
#else
#include "26604.inc"

#declare lg_26604 = 
	union {
		object { _26604 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,180,0> }
		transform { L3LgeoToLDraw inverse }
	}

#declare lg_26604_clear = 
	merge {
		object { _26604 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,180,0> }
		transform { L3LgeoToLDraw inverse }
	}
	
#end