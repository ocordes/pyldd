/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20170417 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_98138p07: Tile 1 x 1 Round with Eye Pattern                              */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_98138p07)
#else
#include "lg_98138.inc"

#declare lg_98138p07_black = 	
	union {
		difference {
			cylinder { <-1.4,0.05,-1.8>, <-1.4,-0.05,-1.8>, 7.1 }
			cylinder { <-1.8,10,-4>, <-1.8,-10,-4>, 2.4 }
		}
	}	

#declare lg_98138p07 = 
	union {
		difference {
			object { lg_98138 }
			union {
				object { lg_98138p07_black }
				transform {L3LgeoToLDraw inverse}
			}
		}
		
		intersection {
			object { lg_98138 }
			object { lg_98138p07_black transform {L3LgeoToLDraw inverse} }
			material { LDXColor0 transform {L3LgeoToLDraw inverse} }
		}
	}	

#declare lg_98138p07_clear = 
	merge {
		difference {
			object { lg_98138_clear }
			merge {
				object { lg_98138p07_black }
				transform {L3LgeoToLDraw inverse}
			}
		}
		
		intersection {
			object { lg_98138_clear }
			object { lg_98138p07_black transform {L3LgeoToLDraw inverse} }
			material { LDXColor0 transform {L3LgeoToLDraw inverse} }
		}
	}	

#end