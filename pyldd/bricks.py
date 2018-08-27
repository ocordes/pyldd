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

import sys, os

brick_data_dir = 'brick_data'

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



known_bricks = { 3004:  [ '3004', None ],     # brick 1 x 2
                 3009:  [ '3009', None ],     # brick 1 x 6
                 3021:  [ '3021', None ],     # plate 2 x 3
                 3023:  [ '3023', None ],     # plate 1 x 2
                 3040:  [ '3040', None ],     # Roof tile 1 x 2 / 45°
                 3069:  [ '3069', None ],     # flat tile 1 x 2
                 3070:  [ '3070', None ],     # flat tile 1 x 1
                 3666:  [ '3666', None ],     # plate 1 x 6
                 3710:  [ '3710', None ],     # plate 1 x 4
                 6098:  [ '3867', None ],     # base 16 x 16 plate
                 6141:  [ '6141', None ],     # plate 1 x 1 round
                 6636:  [ '6636', None ],     # flat tile 1 x 6
                 92946: [ '92946', None ] }   # Root tile 1 x 2 45° W 1/3 Plate



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


    def load_brick_data( self, brickname ):
        filename = os.path.join( brick_data_dir, '{}.dat'.format( brickname ) )
        print( filename )

        try:
            f = open( filename, 'r' )
            d = {}
            parts = []
            for line in f:
                line = line.replace( '\n', '' ).lstrip().rstrip()
                if line[0] == '#':
                    continue
                key, val = line.split('=',1)
                if ( key in ( 'type', 'file', 'width', 'length', 'depth', 'sx', 'sy', 'sz' ) ):
                    d[key] = val
                else:
                    if key == 'parts':
                        #parts = [[None,None]] * int(val)
                        parts = [ [None,None] for _ in range( int(val) ) ]
                    elif key[:4] == 'part':
                        nr = int( key[4:])
                        parts[nr][0] = val
                    elif key[:4] == 'text':
                        nr = int( key[4:])
                        parts[nr][1] = val
            d['parts'] = parts
            f.close()
            print( d )
            return d
        except:
            return None


    def get_pov_object( self ):
        if self.designID in known_bricks:
            defs = known_bricks[self.designID]
            if defs[1] is None:
                defs[1] = self.load_brick_data( defs[0] )

            defs = defs[1]

            objs = []
            for parts in defs['parts']:
                macro = parts[0]
                obj = PovCSGMacro( '%i' % self.refID, macrocmd=macro )
                if parts[1] == 'n':
                    obj.set_texture( color_table.get( self.materialID, 'lg_unknown' ) )
                elif parts[1] == 'r':
                    obj.set_texture( '{} {}'.format( color_table.get( self.materialID, 'lg_unknown' ),
                                                    #'normal { bumps 0.3 scale 0.02 }' ) )
                                                    'normal { bumps 0.1 scale 2 }' ) )
                objs.append( obj )
            if len( objs ) > 1:
                u = PovCSGUnion()
                u.add( objs )
                obj = u
            else:
                obj = objs[0]

            ax = self.ax * self.angle
            ay = self.ay * self.angle
            az = self.az * self.angle
            obj.rotate = [ax,ay,az]
            obj.translate = [self.tx,self.ty,self.tz]

            # now apply the macros
            obj.macros =  'L_Transform( {},{},{},{},{},{} )'.format( defs['width'],
                                                                    defs['depth'],
                                                                    defs['length'],
                                                                    defs['sx'],
                                                                    defs['sy'],
                                                                    defs['sz'] )
            return obj, '{}.inc'.format( defs['file'] )
        else:
            print( 'Brick with designID={} not implemented!'.format( self.designID ) )
        return None, None
