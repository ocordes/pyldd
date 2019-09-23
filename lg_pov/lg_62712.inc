/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150926 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_62712: Brick 2 x 2 with Ball Socket and Axlehole                         */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_62712)
#else
#include "62712.inc"

#declare lg_62712 = 
	union {
		object { _62712 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_62712_clear = 
	merge {
		object { _62712 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}
	
#end