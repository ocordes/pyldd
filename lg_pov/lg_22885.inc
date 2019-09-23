/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170507 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_22885: Brick 1 x 2 x 1.667 with Studs on 1 Side                          */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_22885)
#else
#include "22885.inc"

#declare lg_22885 = 
	union {
		object { _22885 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} translate <10,0,0> }
		object { lg_knob transform {L3LgeoToLDraw} translate <-10,0,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <90,0,90> translate <10,10,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <90,0,90> translate <-10,10,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <90,0,90> translate <10,30,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} rotate <90,0,90> translate <-10,30,-10> }
		transform { L3LgeoToLDraw inverse }
	}

#declare lg_22885_clear = 
	merge {
		object { _22885 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <10,0,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <-10,0,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <90,0,90> translate <10,10,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <90,0,90> translate <-10,10,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <90,0,90> translate <10,30,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} rotate <90,0,90> translate <-10,30,-10> }
		transform { L3LgeoToLDraw inverse }
	}
	
#end