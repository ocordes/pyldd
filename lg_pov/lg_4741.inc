/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150605 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4741: Window 4 x 4 x 6 Outward Sloping                                   */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_4741)
#else
#include "4741.inc"

#declare lg_4741 = 
	union {
		object { _4741 rotate <90,90,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <10,0,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-10,0,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <30,0,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-30,0,0> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_4741_clear = 
	merge {
		object { _4741 rotate <90,90,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <10,0,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-10,0,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <30,0,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-30,0,0> }
		transform {L3LgeoToLDraw inverse}
	}

#end