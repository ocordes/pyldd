/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20150515 Darats                                                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3947: Baseplate 32 x 32 with Craters                                     */
/*                                                                             */
/*******************************************************************************/

#ifdef(lg_3947)
#else
#include "3947.inc"

#declare lg_3947 = 
	union {
		object { _3947 rotate <90,90,0> }
		
		#for (a, 0, 31, 1) 
			#for (b, 0, 1, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 0, 31, 1) 
			#for (b, 30, 31, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 0, 1, 1) 
			#for (b, 2, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 30, 31, 1) 
			#for (b, 2, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (b, 5, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*29,0,310-20*b> }
		#end	
			
		#for (a, 27, 28, 1) 
			#for (b, 6, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 23, 26, 1) 
			#for (b, 7, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 20, 22, 1) 
			#for (b, 8, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 16, 19, 1) 
			#for (b, 9, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 13, 15, 1) 
			#for (b, 10, 29, 1)
				object { lg_knob transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (b, 11, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*12,0,310-20*b> }
		#end
			
		#for (b, 13, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*11,0,310-20*b> }
		#end
			
		#for (b, 14, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*10,0,310-20*b> }
		#end
			
		#for (b, 18, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*9,0,310-20*b> }
		#end
			
		#for (b, 19, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*8,0,310-20*b> }
		#end
			
		#for (b, 24, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*7,0,310-20*b> }
		#end
			
		#for (b, 26, 29, 1)
			object { lg_knob transform {L3LgeoToLDraw} translate <310-20*6,0,310-20*b> }
		#end
			
		object { lg_knob transform {L3LgeoToLDraw} translate <310-20*5,0,310-20*29> }
		
		transform {L3LgeoToLDraw inverse}
	}

#declare lg_3947_clear = 
	merge {
		object { _3947 rotate <90,90,0> }
		
		#for (a, 0, 31, 1) 
			#for (b, 0, 1, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 0, 31, 1) 
			#for (b, 30, 31, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 0, 1, 1) 
			#for (b, 2, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 30, 31, 1) 
			#for (b, 2, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (b, 5, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*29,0,310-20*b> }
		#end	
			
		#for (a, 27, 28, 1) 
			#for (b, 6, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 23, 26, 1) 
			#for (b, 7, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 20, 22, 1) 
			#for (b, 8, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 16, 19, 1) 
			#for (b, 9, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (a, 13, 15, 1) 
			#for (b, 10, 29, 1)
				object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*a,0,310-20*b> }
			#end	
		#end
			
		#for (b, 11, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*12,0,310-20*b> }
		#end
			
		#for (b, 13, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*11,0,310-20*b> }
		#end
			
		#for (b, 14, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*10,0,310-20*b> }
		#end
			
		#for (b, 18, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*9,0,310-20*b> }
		#end
			
		#for (b, 19, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*8,0,310-20*b> }
		#end
			
		#for (b, 24, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*7,0,310-20*b> }
		#end
			
		#for (b, 26, 29, 1)
			object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*6,0,310-20*b> }
		#end
			
		object { lg_knob_clear transform {L3LgeoToLDraw} translate <310-20*5,0,310-20*29> }
		
		transform {L3LgeoToLDraw inverse}
	}
	
#end