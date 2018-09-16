/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3811: Baseplate 32 x 32 road straight                                    */
/*                                                                             */
/*******************************************************************************/
#include "lg_44336base6.inc"
#include "lg_44336base7.inc"
#include "lg_44336base9.inc"

#include "lg_defs.inc"

#ifdef( LEGO_STREET_STYLE)
#else
 #declare LEGO_STREET_STYLE = 1;
#end

#ifdef(lg_44336)
#else

#declare LG_KNOB_DIFF = (LG_BRICK_WIDTH - 2*LG_KNOB_RADIUS)/2;
#declare LG_STREET_MIDDLE_SKIP = 1.2;

#declare LG_GULLY_CORNER = LG_CORNER_SPACE*2;
#declare LG_GULLY_LINE   = 0.04;
#declare LG_GULLY_MARKER = LG_WALL_WIDTH;
#declare LG_GULLY_MARKER_SPACE = LG_KNOB_RADIUS;
#declare LG_MARKER_LENGTH = 2*LG_BRICK_WIDTH - 6 * LG_GULLY_LINE;

#declare LG_EE = LG_E * 1.000001;


#declare gully_part_corner1 = difference{
//#declare gully_part_corner1 = union{
    cylinder{
      <0,0,0>,
      <0,0,LG_EE>
      LG_GULLY_CORNER
    }
    union{
      box{
        <0,-LG_GULLY_CORNER*2,-1>,
        <LG_GULLY_CORNER*2,+LG_GULLY_CORNER*2,1>
      }
      box{
        <-LG_GULLY_CORNER*2,0,-1>,
        <LG_GULLY_CORNER*2,LG_GULLY_CORNER*2,1>
      }
    }
}


#declare gully_part_marker  = union{
  box{
    <-LG_MARKER_LENGTH/2+LG_GULLY_MARKER,-LG_GULLY_MARKER/2,0>,
    <+LG_MARKER_LENGTH/2-LG_GULLY_MARKER,+LG_GULLY_MARKER/2,LG_EE>
  }
  cylinder{
    <-LG_MARKER_LENGTH/2+LG_GULLY_MARKER,0,0>,
    <-LG_MARKER_LENGTH/2+LG_GULLY_MARKER,0,LG_EE>,
    LG_GULLY_MARKER/2
  }
  cylinder{
    <LG_MARKER_LENGTH/2-LG_GULLY_MARKER,0,0>,
    <LG_MARKER_LENGTH/2-LG_GULLY_MARKER,0,LG_EE>,
    LG_GULLY_MARKER/2
  }
}

#declare gully = union{
    union{
      box{
        <0,-1.5*LG_BRICK_WIDTH+LG_GULLY_CORNER,0>,
        <2*LG_BRICK_WIDTH,+1.5*LG_BRICK_WIDTH-LG_GULLY_CORNER,LG_E>
      }
      box{
        <LG_GULLY_CORNER,-1.5*LG_BRICK_WIDTH,0>,
        <2*LG_BRICK_WIDTH-LG_GULLY_CORNER,+1.5*LG_BRICK_WIDTH,LG_E>
      }
      cylinder{
        <LG_GULLY_CORNER,-1.5*LG_BRICK_WIDTH+LG_GULLY_CORNER,0>,
        <LG_GULLY_CORNER,-1.5*LG_BRICK_WIDTH+LG_GULLY_CORNER,LG_E>
        LG_GULLY_CORNER
      }
      cylinder{
        <2*LG_BRICK_WIDTH-LG_GULLY_CORNER,-1.5*LG_BRICK_WIDTH+LG_GULLY_CORNER,0>,
        <2*LG_BRICK_WIDTH-LG_GULLY_CORNER,-1.5*LG_BRICK_WIDTH+LG_GULLY_CORNER,LG_E>
        LG_GULLY_CORNER
      }
      cylinder{
        <LG_GULLY_CORNER,1.5*LG_BRICK_WIDTH-LG_GULLY_CORNER,0>,
        <LG_GULLY_CORNER,1.5*LG_BRICK_WIDTH-LG_GULLY_CORNER,LG_E>
        LG_GULLY_CORNER
      }
      cylinder{
        <2*LG_BRICK_WIDTH-LG_GULLY_CORNER,1.5*LG_BRICK_WIDTH-LG_GULLY_CORNER,0>,
        <2*LG_BRICK_WIDTH-LG_GULLY_CORNER,1.5*LG_BRICK_WIDTH-LG_GULLY_CORNER,LG_E>
        LG_GULLY_CORNER
      }
      texture{
        lg_black
      }
   }
   union{
     box{
       <LG_GULLY_LINE,-1.5*LG_BRICK_WIDTH+2*LG_GULLY_LINE,0>,
       <2*LG_GULLY_LINE,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE,LG_E*1.001>
     }
     box{
       <2*LG_BRICK_WIDTH-LG_GULLY_LINE,-1.5*LG_BRICK_WIDTH+2*LG_GULLY_LINE,0>,
       <2*LG_BRICK_WIDTH-2*LG_GULLY_LINE,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE,LG_E*1.001>
     }
     box{
       <2*LG_GULLY_LINE,-1.5*LG_BRICK_WIDTH+2*LG_GULLY_LINE,0>,
       <2*LG_BRICK_WIDTH-2*LG_GULLY_LINE,-1.5*LG_BRICK_WIDTH+1*LG_GULLY_LINE,LG_E*1.001>
     }
     box{
       <2*LG_GULLY_LINE,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE,0>,
       <2*LG_BRICK_WIDTH-2*LG_GULLY_LINE,1.5*LG_BRICK_WIDTH-1*LG_GULLY_LINE,LG_E*1.001>
     }
     object{
       gully_part_corner1
       translate <LG_GULLY_LINE*2,-1.5*LG_BRICK_WIDTH+2*LG_GULLY_LINE,0>
     }
     object{
       gully_part_corner1
       rotate z*90
       translate <LG_BRICK_WIDTH*2-2*LG_GULLY_LINE,-1.5*LG_BRICK_WIDTH+2*LG_GULLY_LINE,0>
     }
     object{
       gully_part_corner1
       rotate z*180
       translate <LG_BRICK_WIDTH*2-2*LG_GULLY_LINE,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE,0>
     }
     object{
       gully_part_corner1
       rotate z*270
       translate <LG_GULLY_LINE*2,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE,0>
     }
     #declare COUNTER=0;
     #while (COUNTER<5)
     object{
       gully_part_marker
       translate <LG_BRICK_WIDTH,1.5*LG_BRICK_WIDTH-2*LG_GULLY_LINE-LG_GULLY_MARKER_SPACE-LG_GULLY_MARKER/2-COUNTER*(LG_GULLY_MARKER+LG_GULLY_MARKER_SPACE),0>
     }
     #declare COUNTER=COUNTER+1;
     #end
     texture{
       lg_white
     }
   }
}

#declare lg_44336_color_style_1 = union{
  box{
      //<(7*LG_BRICK_WIDTH)-LG_KNOB_DIFF,-16*LG_BRICK_WIDTH,0>,
      //<(6*LG_BRICK_WIDTH)+LG_KNOB_DIFF,16*LG_BRICK_WIDTH,LG_E>
      <(6.5*LG_BRICK_WIDTH)-LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <(6.5*LG_BRICK_WIDTH)+LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_dark_green
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      //<-(7*LG_BRICK_WIDTH)+LG_KNOB_DIFF,-16*LG_BRICK_WIDTH,0>,
      //<-(6*LG_BRICK_WIDTH)-LG_KNOB_DIFF,16*LG_BRICK_WIDTH,LG_E>
      <-(6.5*LG_BRICK_WIDTH)+LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <-(6.5*LG_BRICK_WIDTH)-LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_dark_green
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=0;
  #while (COUNTER<9)
  box{
      <-LG_KNOB_RADIUS,(COUNTER*(2+LG_STREET_MIDDLE_SKIP)+1-16+LG_STREET_MIDDLE_SKIP)*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,(COUNTER*(2+LG_STREET_MIDDLE_SKIP)+1-16+2+LG_STREET_MIDDLE_SKIP)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
  box{
      <-LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,-15*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      <-LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,15*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
}


#declare lg_44336_color_style_2 = union{
  box{
      <(6.5*LG_BRICK_WIDTH)-LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <(6.5*LG_BRICK_WIDTH)+LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_dark_green
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      <-(6.5*LG_BRICK_WIDTH)-LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <-(6.5*LG_BRICK_WIDTH)+LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_dark_green
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      <-(8.5*LG_BRICK_WIDTH)+LG_WALL_WIDTH,-16*LG_BRICK_WIDTH,0>,
      <-(8.5*LG_BRICK_WIDTH)-LG_WALL_WIDTH,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      <(8.5*LG_BRICK_WIDTH)+LG_WALL_WIDTH,-16*LG_BRICK_WIDTH,0>,
      <(8.5*LG_BRICK_WIDTH)-LG_WALL_WIDTH,16*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=0;
  #while (COUNTER<9)
  box{
      <-LG_KNOB_RADIUS,(COUNTER*(2+LG_STREET_MIDDLE_SKIP)+1-16+LG_STREET_MIDDLE_SKIP)*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,(COUNTER*(2+LG_STREET_MIDDLE_SKIP)+1-16+2+LG_STREET_MIDDLE_SKIP)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
  box{
      <-LG_KNOB_RADIUS,-16*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,-15*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  box{
      <-LG_KNOB_RADIUS,16*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,15*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
}


#declare lg_44336_color_style_3 = union{
  #declare COUNTER=0;
  #while (COUNTER<4)
  box{
      <-LG_KNOB_RADIUS,(COUNTER*(5+3)+1.5-16)*LG_BRICK_WIDTH,0>,
      <+LG_KNOB_RADIUS,(COUNTER*(5+3)+1.5-16+5)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
  #declare COUNTER=0;
  #while (COUNTER<13)
  box{
      <-9*LG_BRICK_WIDTH,(COUNTER*(1.5+0.5)+0.5-16)*LG_BRICK_WIDTH,0>,
      <-9*LG_BRICK_WIDTH-2*LG_KNOB_RADIUS,(COUNTER*(1.5+0.5)+0.5-16+1.5)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
  box{
      <-9*LG_BRICK_WIDTH,15.5*LG_BRICK_WIDTH,0>,
      <-9*LG_BRICK_WIDTH-2*LG_KNOB_RADIUS,14*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=0;
  #while (COUNTER<13)
  box{
      <9*LG_BRICK_WIDTH,(-COUNTER*(1.5+0.5)-0.5+16)*LG_BRICK_WIDTH,0>,
      <9*LG_BRICK_WIDTH+2*LG_KNOB_RADIUS,(-COUNTER*(1.5+0.5)-0.5+16-1.5)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
  box{
      <9*LG_BRICK_WIDTH,-15.5*LG_BRICK_WIDTH,0>,
      <9*LG_BRICK_WIDTH+2*LG_KNOB_RADIUS,-14*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  object{
    gully
    translate <-10*LG_BRICK_WIDTH+(LG_BRICK_WIDTH-2*LG_KNOB_RADIUS),12*LG_BRICK_WIDTH,0>
  }
  object{
    gully
    translate <+8*LG_BRICK_WIDTH-(LG_BRICK_WIDTH-2*LG_KNOB_RADIUS),-12*LG_BRICK_WIDTH,0>
  }
}


#declare lg_44336 = union{
      #switch( LEGO_STREET_STYLE )
       #case(1)
         object{ lg_44336base9 }
         object{ lg_44336_color_style_1 }
        #break
       #case(2)
         object{ lg_44336base7 }
         object{ lg_44336_color_style_2 }
        #break
       #case(3)
         object{ lg_44336base6 }
         object{ lg_44336_color_style_3 }
        #break
      #end
}
#end
