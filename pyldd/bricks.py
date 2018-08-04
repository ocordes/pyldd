"""

pyldd/bricks.py

Author: Oliver Cordes

History:
 2018-07-27: start project

"""

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *


color_table = { 26: 'lg_black',
                23: 'lg_blue',
                28: 'lg_green',
                37: 'lg_bright_green',
                116: 'lg_blue_green',
                 4: 'lg_light_red',
                1007: 'lg_rose',
                24: 'lg_yellow',   # lg_yellow2 ?
                 1: 'lg_white',
                 6: 'lg_light_green',
                 3: 'lg_light_yellow',
                 5: 'lg_tan',
                39: 'lg_light_violet',
                22: 'lg_violet',
                23: 'lg_violet_blue',
                25: 'lg_orange',
                26: 'lg_magenta',
                27: 'lg_dark_tan',  # lg_lime ?
                29: 'lg_light_purple',
                33: 'lg_clear_blue',
                34: 'lg_clear_green',
                36: 'lg_clear_red',
                37: 'lg_clear_violet',
                40: 'lg_clear_brown',
                41: 'lg_clear_cyan',
                42: 'lg_clear_neon_yellow',
                45: 'lg_clear_pink',
                46: 'lg_clear_yellow',
                47: 'lg_clear',
                57: 'lg_clear_neon_orange',
                69: 'lg_bright_purple',
                70: 'lg_reddish_brown',
                194: 'lg_bluish_grey',
                199: 'lg_dark_bluish_grey',
                73: 'lg_medium_blue',
                74: 'lg_medium_green',
                77: 'lg_paradisa_pink',
                78: 'lg_light_flesh',
                85: 'lg_medium_violet',
                86: 'lg_dark_flesh',
                89: 'lg_royal_blue',
                92: 'lg_flesh',
                134: 'lg_pearl_copper',
                135: 'lg_pearl_grey',
                137: 'lg_pearl_blue',
                142: 'lg_pearl_gold',
                151: 'lg_very_light_bluish_grey',
                272: 'lg_dark_blue',
                288: 'lg_dark_green',
                320: 'lg_dark_red',
                313: 'lg_maersk_blue',
                334: 'lg_gold_chrome',
                335: 'lg_sand_red',
                366: 'lg_earth_orange',
                373: 'lg_sand_purple',
                378: 'lg_sand_green',
                379: 'lg_sand_blue',
                383: 'lg_chrome',
                462: 'lg_light_orange',
                484: 'lg_dark_orange',
                503: 'lg_very_light_grey',
                999: 'lg_undefined',
                998: 'lg_medium_orange'   # no code known
            }



known_bricks = { 3021: { 'lg_3021' : 'n' },
                 6098: { 'lg_6098' : 'n' },
                 6141: { 'lg_6141' : 'n' } }



class Brick( object ):
    def __init__( self, adict ):
        for name, value in adict.items():
            if name in ( 'refID', 'designID', 'materialID', 'itemNos'):
                setattr( self, name, int( value ) )
            else:
                setattr( self, name, float( value ) )

    def __str__( self ):
        return 'designID= {:>5} materialID= {:>3} itemNos= {:>7}'.format( self.designID,
                                                                    self.materialID,
                                                                    self.itemNos )

    def get_pov_object( self ):
        if self.designID in known_bricks:
            defs = known_bricks[self.designID]
            objs = []
            for parts in defs:
                macro = parts
                print( self.angle )
                print( self.ax )
                print( self.ay )
                print( self.az )
                obj = PovCSGMacro( '%i' % self.refID, macrocmd=macro )
                obj.set_scale( [-1,-1,1] )
                ax = self.ax * self.angle
                ay = self.ay * self.angle
                az = self.az * self.angle
                obj.rotate = [-90,-90,0]
                obj.rotate = [ax,ay,az]
                obj.translate = [self.tx,self.ty,self.tz]
                obj.set_texture( color_table.get( self.materialID, 'lg_unknown' ) )
                objs.append( obj )
            if len( objs ) > 1:
                u = PovCSGUnion()
                u.add( objs )
                obj = u
            else:
                obj = objs[0]
            return obj, 'lg_{}.inc'.format( self.designID )
        else:
            print( 'Brick with designID={} not implemented!'.format( self.designID ) )
        return None, None
