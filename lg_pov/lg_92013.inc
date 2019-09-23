/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150926 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_92013: Brick 2 x 2 with Ball Socket and Axlehole                         */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_92013)
#else
#include "92013.inc"

#declare lg_92013 = 
	union {
		object { _92013 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_92013_clear = 
	merge {
		object { _92013 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}
	
#end