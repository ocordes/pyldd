/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980228 Lutz Uhlmann                                                       */
/* 20071223 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2711: Technic Rotor 2 Blade                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2711)
#else
#declare lg_2711 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-0.04
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_tech_knob_logo
  translate <0, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_tech_knob_logo
  translate <0, -LG_BRICK_WIDTH, 0>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     box {
      <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_E, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, 2*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   union {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   union {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.08
   }
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
    0.08-LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_2711_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-0.04
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_tech_knob_logo_clear
  translate <0, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_tech_knob_logo_clear
  translate <0, -LG_BRICK_WIDTH, 0>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_E, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, 2*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   merge {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   merge {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.08
   }
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
    0.08-LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end