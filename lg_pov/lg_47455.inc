/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150921 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_47455: Technic Brick 2 x 2 with Hole, Half Rotation Joint Ball Vert      */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_47455)
#else
#include "47455.inc"

#declare lg_47455 = 
	object { _47455 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*90 }

#declare lg_47455_clear = 
	object { _47455 rotate <90,90,0> transform {L3LgeoToLDraw inverse} rotate z*90  }

#end
