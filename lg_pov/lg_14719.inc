/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_14719: Flat tile  2 x 2 Corner                                                 */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_14719)
#else
#declare LENGTH = 2;
#declare WIDTH = 2;
#declare lg_14719 =
union {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (((WIDTH-1)*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   difference {
    box {
     <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
     <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
    }
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
     <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_E>
    }
   }
   difference {
    union {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, WIDTH*LG_BRICK_WIDTH+LG_E, LG_PLATE_HEIGHT>
    }
   }
  }
  union {
   difference {
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
    }
    box {
     <LENGTH/LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT+LG_E>
    }
   }
  }
 }
 box {
  <sqrt(2)*(LG_BRICK_WIDTH+LG_CYLINDER_RADIUS)/2, -0.06, LG_PLATE_INNER_HEIGHT>,
  <sqrt(2)*LG_BRICK_WIDTH, 0.06, 0>
  rotate <0, 0, 45>
 }
 object {
  lg_plate_column
  translate <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_plate_column
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 rotate <0, 0, 180>
}

#declare lg_2420_clear =
merge {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (((WIDTH-1)*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <(LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   difference {
    box {
     <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
     <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
    }
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
     <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_E>
    }
   }
   difference {
    merge {
     box {
      <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, WIDTH*LG_BRICK_WIDTH+LG_E, LG_PLATE_HEIGHT>
    }
   }
  }
  merge {
   difference {
    box {
     <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_E>,
     <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
    }
    box {
     <LENGTH/LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT+LG_E>
    }
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
   }
  }
 }
 box {
  <sqrt(2)*(LG_BRICK_WIDTH+LG_CYLINDER_RADIUS)/2, -0.06, LG_PLATE_INNER_HEIGHT>,
  <sqrt(2)*LG_BRICK_WIDTH, 0.06, 0>
  rotate <0, 0, 45>
 }
 object {
  lg_plate_column_clear
  translate <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_plate_column_clear
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
 }
 translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 rotate <0, 0, 180>
}

#end