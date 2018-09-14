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
  #declare COUNTER=0;
  #while (COUNTER<13)
  box{
      <9*LG_BRICK_WIDTH,(-COUNTER*(1.5+0.5)-0.5+16)*LG_BRICK_WIDTH,0>,
      <9*LG_BRICK_WIDTH-2*LG_KNOB_RADIUS,(-COUNTER*(1.5+0.5)-0.5+16-1.5)*LG_BRICK_WIDTH,LG_E>
      texture{
              lg_white
              normal { bumps 0.1 scale 2 }
      }
  }
  #declare COUNTER=COUNTER+1;
  #end
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
