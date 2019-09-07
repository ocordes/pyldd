/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20160928 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_88293: Brick 3 x 3 x 2 Round Corner with Dome Top                        */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_88293)
#else
#include "88293.inc"

#declare lg_88293 = 
	union {
		object { _88293 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_88293_clear = 
	merge {
		object { _88293 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> }
		transform {L3LgeoToLDraw inverse}
	}

#end