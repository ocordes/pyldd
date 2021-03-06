/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20090113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4345a: Mailbox 2 x 2 x 2 closed studs                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4345a)
#else
#declare lg_4345a =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90-90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -2*LG_BRICK_HEIGHT>
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -3*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
  }
 }
 difference {
  union {
   box {
    <0, 0.06, -0.04>,
    <LG_WALL_WIDTH, -0.06, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
   box {
    <0, LG_BRICK_WIDTH/2, -0.04>,
    <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.12, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, -0.04>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.12, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
  }
  box {
   <-LG_E, LG_BRICK_WIDTH/2+LG_E, 0>,
   <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 4*LG_PLATE_HEIGHT>
  }
  translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -5*LG_PLATE_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5.5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -5.5*LG_PLATE_HEIGHT>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR=1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#declare lg_4345a_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -2*LG_BRICK_HEIGHT>
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -3*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
  }
 }
 difference {
  merge {
   box {
    <0, 0.06, -0.04>,
    <LG_WALL_WIDTH, -0.06, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
   box {
    <0, LG_BRICK_WIDTH/2, -0.04>,
    <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.12, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, -0.04>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.12, 3.2*LG_PLATE_HEIGHT>
    rotate <0, -atan2(1,6)*180/pi, 0>
   }
  }
  box {
   <-LG_E, LG_BRICK_WIDTH/2+LG_E, 0>,
   <-1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 4*LG_PLATE_HEIGHT>
  }
  translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -5*LG_PLATE_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5.5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -5.5*LG_PLATE_HEIGHT>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5.5*LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR=1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#end
