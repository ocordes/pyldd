/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150727 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_87081: Brick 4 x 4 Round with Pinhole and Snapstud                       */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_87081)
#else
#include "87081.inc"

#declare lg_87081 = 
	union {
		object { _87081 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-30,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-30,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <30,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <30,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,-30> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,-30> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,30> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,30> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_87081_clear = 
	merge {
		object { _87081 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-30,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-30,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <30,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <30,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,-30> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,-30> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,30> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,30> }
		transform {L3LgeoToLDraw inverse}
	}

#end