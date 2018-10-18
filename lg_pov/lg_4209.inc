/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150529 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4209: Hose Reel 2 x 4 x 2 Holder                                         */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_4209)
#else
#include "4209.inc"

#declare lg_4209 = 
	union {
		object { _4209 rotate <90,90,0> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <30,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-30,0,10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <30,0,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-10,0,-10> }
		object { lg_tech_knob_logo transform {L3LgeoToLDraw} translate <-30,0,-10> }
		object { lg_plate_cylinder transform {L3LgeoToLDraw} translate <0,48,0> }
		object { lg_plate_cylinder transform {L3LgeoToLDraw} translate <20,48,0> }
		object { lg_plate_cylinder transform {L3LgeoToLDraw} translate <-20,48,0> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_4209_clear = 
	merge {
		object { _4209 rotate <90,90,0> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <10,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <30,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-10,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-30,0,10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <10,0,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <30,0,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-10,0,-10> }
		object { lg_tech_knob_logo_clear transform {L3LgeoToLDraw} translate <-30,0,-10> }
		object { lg_plate_cylinder_clear transform {L3LgeoToLDraw} translate <0,48,0> }
		object { lg_plate_cylinder_clear transform {L3LgeoToLDraw} translate <20,48,0> }
		object { lg_plate_cylinder_clear transform {L3LgeoToLDraw} translate <-20,48,0> }
		transform {L3LgeoToLDraw inverse}
	}

#end