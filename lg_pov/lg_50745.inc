/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170817 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50745: Car Mudguard 4 x 2.5 x 2                                          */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_50745)
#else
#include "50745.inc"

#declare lg_50745 = 
	union {
		object { _50745 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,-10> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,10> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,-10> }
		transform { L3LgeoToLDraw inverse }
	}

#declare lg_50745_clear = 
	merge {
		object { _50745 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <-10,0,-10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,10> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> translate <10,0,-10> }
		transform { L3LgeoToLDraw inverse }
	}
	
#end