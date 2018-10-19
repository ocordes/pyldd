/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170820 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_52031: Wedge 4 x 6 x 0.667 Curved                                        */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_52031)
#else
#include "52031.inc"

#declare lg_52031 = 
	union {
		object { _52031 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-30,0,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <30,0,0> }
		transform { L3LgeoToLDraw inverse }
		rotate z*180
	}

#declare lg_52031_clear = 
	merge {
		object { _52031 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-30,0,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <30,0,0> }
		transform { L3LgeoToLDraw inverse }
		rotate z*180
	}
	
#end
