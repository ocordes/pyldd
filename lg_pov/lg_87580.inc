/*******************************************************************************/
/*                                                                             */
/* 20181008 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_87580: Plate 2 x 2 with Stud                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_87580)
#else
#declare LENGTH = 2;
#declare WIDTH = 2;
#declare lg_87580 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 difference {
  object {
   lg_brick_column
   translate <0, 0, -LG_PLATE_HEIGHT>
  }
  box {
   <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT>,
   <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_E>
  }
 }
} 

#declare lg_3794_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 difference {
  object {
   lg_brick_column_clear
   translate <0, 0, -LG_PLATE_HEIGHT>
  }
  box {
   <LG_KNOB_RADIUS, LG_KNOB_RADIUS, LG_BRICK_HEIGHT>,
   <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_E>
  }
 }
} 

#end
