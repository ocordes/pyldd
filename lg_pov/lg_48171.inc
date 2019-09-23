/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150920 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_48171: Technic Brick 2 x 2 with Hole, Half Rotation Joint Ball Vert      */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_48171)
#else
#include "48171.inc"

#declare lg_48171 = 
	union {
		object { _48171 rotate <90,90,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_48171_clear = 
	merge {
		object { _48171 rotate <90,90,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-10,0,-10> }
		transform {L3LgeoToLDraw inverse}
	}
	
#end