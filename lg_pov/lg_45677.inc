/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170820 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_45677: Wedge 4 x 4 x 0.667 Curved                                        */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_45677)
#else
#include "45677.inc"

#declare lg_45677 = 
	union {
		object { _45677 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,0> }
		transform { L3LgeoToLDraw inverse }
		rotate z*-90
	}

#declare lg_45677_clear = 
	merge {
		object { _45677 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,0> }
		transform { L3LgeoToLDraw inverse }
		rotate z*-90
	}
	
#end
