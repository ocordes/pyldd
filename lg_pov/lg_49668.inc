/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20160130 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_49668: Plate 1 x 1 with Tooth In-Line                                    */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_49668)
#else
#include "49668.inc"

#declare lg_49668 = 
	union {
		object { _49668 rotate <90,90,0> }
		object { lg_knob transform {L3LgeoToLDraw} rotate <0,-90,0> }
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_49668_clear = 
	merge {
		object { _49668 rotate <90,90,0> }
		object { lg_knob_clear transform {L3LgeoToLDraw} rotate <0,-90,0> }
		transform {L3LgeoToLDraw inverse}
	}

#end