/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20151129 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_88393: Brick 1 x 2 x 5 with Groove                                       */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_88393)
#else
#include "88393.inc"

#declare lg_88393 = 
	union {
		object { _88393 rotate <90,90,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <0,90,0> translate <10,0,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <0,90,0> translate <-10,0,0> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_88393_clear = 
	merge {
		object { _88393 rotate <90,90,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <0,90,0> translate <10,0,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <0,90,0> translate <-10,0,0> }
		transform {L3LgeoToLDraw inverse}
	}

#end