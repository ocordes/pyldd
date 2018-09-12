"""

pyldd/bricks.py

Author: Oliver Cordes

History:
 2018-08-31: add more bricks
 2018-07-27: start project

"""

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *

import sys, os

brick_data_dir = 'brick_data'

color_table = {    1: 'lg_white',
		         100: 'lg_salmon',
                1001: 'lg_gold_chrome',
		        1002: 'lg_metal_silver',   # missing
		        1004: 'lg_metal_gold',     # missing
		        1007: 'lg_pink',
		         102: 'lg_medium_blue',
		         103: 'lg_very_light_grey',
		         104: 'lg_purple',
		         105: 'lg_medium_orange',
		         106: 'lg_orange',
		         107: 'lg_blue_green',
		          11: 'lg_maersk_blue',
		         110: 'lg_violet_blue',
		         111: 'lg_clear_brown',
		         112: 'lg_royal_blue',
		         113: 'lg_clear_pink',
		         114: 'lg_glitter_trans_dark_pink',   # missing
		         115: 'lg_lime',
		         116: 'lg_light_turquoise',  # missing
		         117: 'lg_trans_glitter',    # missing
		         118: 'lg_aqua',             # missing
		         119: 'lg_lime',
		          12: 'lg_light_orange',
		         120: 'lg_light_green',
		         124: 'lg_magenta',
		         126: 'lg_bright_purple',
                 127: 'lg_pearl_gold',
		         128: 'lg_earth_orange',
		         129: 'lg_glitter_trans_purple',  # missing
		         132: 'lg_speckle_black_silver',  # missing
		         135: 'lg_sand_blue',
		         136: 'lg_sand_purple',
		         138: 'lg_dark_tan',
		         139: 'lg_pearl_copper',
		         140: 'lg_dark_blue',
		         141: 'lg_dark_green',
		         143: 'lg_clear_blue',
		         145: 'lg_pearl_blue',
		         151: 'lg_sand_green',
		         153: 'lg_sand_red',
		         154: 'lg_dark_red',
		         157: 'lg_clear_neon_yellow',
		         179: 'lg_pearl_grey',          # light?
		          18: 'lg_flesh',
		         182: 'lg_clear_neon_orange',
		         183: 'lg_pearl_white',
		         187: 'lg_brown',
		         191: 'lg_light_orange',
		         192: 'lg_reddish_brown',
		         194: 'lg_bluish_grey',
                 195: 'lg_violet_blue',
		         196: 'lg_royal_blue',       # dark ?
		           2: 'lg_grey',             # light ?
		          20: 'lg_milky_white',
		         200: 'lg_metallic_green',   # missing
		 208: 'lg_very_light_bluish_grey',
		  21: 'lg_red',
		 212: 'lg_light_blue',
		 216: 'lg_rust',            # missing
		 219: 'lg_medium_violet',
		  22: 'lg_dark_pink',
		 221: 'lg_pink',
		 222: 'lg_paradisa_pink',
		 223: 'lg_light_pink',
		 226: 'lg_light_yellow',    #?
		 227: 'lg_clear_yellow',
		 229: 'lg_clear_light_blue',
		  23: 'lg_blue',
		 230: 'lg_clear_pink',
		 231: 'lg_clear_neon_orange',
		 232: 'lg_sky_blue',
		 234: 'lg_clear_neon_yellow',
		  24: 'lg_yellow',
		  26: 'lg_black',
		 268: 'lg_dark_purple',
		  27: 'lg_dark_grey',
		  28: 'lg_green',
		 283: 'lg_light_flesh',
		 284: 'lg_trans_light_purple',   # missing
		  29: 'lg_medium_green',
		 293: 'lg_trans_light_blue_violet', # missing
		 294: 'lg_glow_in_dark_trans',      # missing
		 297: 'lg_pearl_gold',
		   3: 'lg_light_yellow',
		 302: 'lg_glitter_trans_light_blue',  # missing
		 308: 'lg_dark_brown',                # missing
		 309: 'lg_silver_chromw',     # misssing
		 310: 'lg_gold_chrome',
		 312: 'lg_dark_flesh',
		 315: 'lg_flat_silver',   # missing
		 316: 'lg_pearl_dark_grey',  # missing
		 321: 'lg_dark_azure',  # missing
		 322: 'lg_medium_azure', # missing
		 323: 'lg_light_aqua', # missing
		 324: 'lg_medium_lavender', # missing
		 325: 'lg_lavender', # missing
		 326: 'lg_yellow_green', # missing
		 329: 'lg_glow_in_dark_white', # missing
		 330: 'lg_olive_green',  # missing
		 339: 'lg_clear_neon_green', # missing
		  36: 'lg_light_orange',
		  37: 'lg_bright_green',
		  38: 'lg_dark_orange',
		   4: 'lg_salmon',
          40: 'lg_clear',
		  42: 'lg_clear_light_blue',
		  43: 'lg_clear_blue',
		  44: 'lg_clear_yellow',
		  45: 'lg_light_blue',
		  47: 'lg_clear_neon_orange',
		  48: 'lg_clear_green',
		  49: 'lg_clear_neon_green',
		   5: 'lg_tan',
		  50: 'lg_glow_in_dark_opaque',  # missing
		   6: 'lg_light_green',
		  75: 'lg_speckle_black_copper',
		  86: 'lg_dark_flesh',
                 999: 'lg_undefined',
                 998: 'lg_medium_orange'   # no code known
            }



known_bricks = { 2356:  [ '2356', None ],     # brick 4 x 6
                 2357:  [ '2357', None ],     # brick 2 x 2 corner
                 2412:  [ '2412', None ],     # tile 1 x 2 grille without groove
                 2420:  [ '2420', None ],     # plate 2 x 2 corner
                 2431:  [ '2431', None ],     # flat tile 1 x 4
                 2454:  [ '2454', None ],     # brick 1 x 2 x 5
                 2877:  [ '2877', None ],     # brick 1 x 2 with grille
                 3001:  [ '3001', None ],     # brick 2 x 4
                 3002:  [ '3002', None ],     # brick 2 x 3
                 3003:  [ '3003', None ],     # brick 2 x 2
                 3004:  [ '3004', None ],     # brick 1 x 2
                 3005:  [ '3005', None ],     # brick 1 x 1
                 3006:  [ '3006', None ],     # brick 2 x 10
                 3007:  [ '3007', None ],     # brick 2 x 8
                 3008:  [ '3008', None ],     # brick 1 x 8
                 3009:  [ '3009', None ],     # brick 1 x 6
                 3010:  [ '3010', None ],     # brick 1 x 4
                 3020:  [ '3020', None ],     # plate 2 x 4
                 3021:  [ '3021', None ],     # plate 2 x 3
                 3023:  [ '3023', None ],     # plate 1 x 2
                 3024:  [ '3024', None ],     # plate 1 x 1
                 3028:  [ '3028', None ],     # plate 6 x 12
                 3029:  [ '3029', None ],     # plate 4 x 12
                 3035:  [ '3035', None ],     # plate 4 x 8
                 3036:  [ '3036', None ],     # plate 6 x 8
                 3040:  [ '3040', None ],     # roof tile 1 x 2 / 45°
                 3063:  [ '3063', None ],     # brick 2 x 2 corner round
                 3069:  [ '3069', None ],     # flat tile 1 x 2
                 3062:  [ '3062', None ],     # brick 1 x 1 round open stud
                 3070:  [ '3070', None ],     # flat tile 1 x 1
                 3185:  [ '3185', None ],     # fence 1 x 4 x 2
                 3245:  [ '3245', None ],     # brick 1 x 2 x 2
                 3460:  [ '3460', None ],     # plate 1 x 8
                 3470:  [ '3470', None ],     # plant tree oval 4 x 4 x 6
                 3471:  [ '3471', None ],     # plant tree pyramidal 4 x 4 x 6.667 type 1
                 3622:  [ '3622', None ],     # brick 1 x 3
                 3623:  [ '3623', None ],     # plate 1 x 3
                 3660:  [ '3660', None ],     # slope brick 45 2 x 2 inverted
                 3666:  [ '3666', None ],     # plate 1 x 6
                 3710:  [ '3710', None ],     # plate 1 x 4
                 3811:  [ '3811', None ],     # base 32 x 32 plate
                 3900:  [ '3900', None ],     # minifig signal holder (stop sign)
                 3940:  [ '3940', None ],     # space stand 2 x 2 x 2
                 3941:  [ '3941', None ],     # brick 2 x 2 round
                 3942:  [ '3942', None ],     # cone 2 x 2 x 2 open stud
                 4079:  [ '4079', None ],     # town seat 2 x 2
                 4083:  [ '4083', None ],     # bar 1 x 4 x 2
                 4162:  [ '4162', None ],     # flat tile 1 x 8
                 4287:  [ '4287', None ],     # slope brick 33 3 x 1 inverted
                 4477:  [ '4477', None ],     # plate 1 x 10
                 4589:  [ '4589', None ],     # nose cone small 1 x 1
                 4740:  [ '4740', None ],     # satellite dish 2 x 2
                 6098:  [ '3867', None ],     # base 16 x 16 plate
                 6141:  [ '6141', None ],     # plate 1 x 1 round
                 6143:  [ '3941', None ],     # brick 2 x 2 round
                 6215:  [ '6215', None ],     # brick 2 x 3 with curved top
                 6636:  [ '6636', None ],     # flat tile 1 x 6
                 14719: [ '14719', None ],    # flat tile 2 x 2 corner
                 30055: [ '30055', None ],    # fence 1 x 4 x 2 spindled
                 30136: [ '30136', None ],    # log brick 1 x 2
                 30137: [ '30137', None ],    # log brick 1 x 4
                 30145: [ '30145', None ],    # brick 2 x 2 x 3
                 30179: [ '30179', None ],    # door 1 x 4 x 6 framte type 1
                 41539: [ '41539', None ],    # plate 8 x 8
                 44042: [ '2356', None ],     # brick 4 x 6
                 44237: [ '44237', None ],    # brick 2 x 6
                 60592: [ '60592', None ],    # window  1 x 2 x 2 without sill
                 60594: [ '60594', None ],    # window 1 x 4 x 3 without shutter tabs
                 60601: [ '60601', None ],    # glass for window 1 x 2 x 2 without sill
                 60603: [ '60603', None ],    # glass for window 1 x 4 x 3 opening
                 60608: [ '60608', None ],    # window 1 x 2 x 3 pane with thick corner tabs
                 60616: [ '60616', None ],    # door 1 x 4 x 6 smooth with square handle plinth
                 60623: [ '60623', None ],    # door 1 x 4 x 6 with 4 panes and stud handle
                 87087: [ '87087', None ],    # brick 1 x 1 with stud on 1 side
                 93273: [ '93273', None ],    # plate with bow 1 x 4 x 2/3
                 92946: [ '92946', None ],    # roof tile 1 x 2 45° W 1/3 Plate
                 98283: [ '98283', None ]     # brick 1 x 2 with embossed bricks
}


class Brick( object ):
    def __init__( self, adicts ):
        if isinstance( adicts, list ):
            for adict in adicts:
                self._set_attributes( adict )
        else:
            self._set_attributes( adicts )


    def _set_attributes( self, adict ):
        for name, value in adict.items():
            if name in ( 'refID', 'designID', 'materialID', 'itemNos'):
                setattr( self, name, int( value ) )
            elif name in ( 'transformation', 'decoration' ):
                setattr( self, name, value )
            else:
                setattr( self, name, float( value ) )

    def __str__( self ):
        return 'designID= {:>5} materialID= {:>3} itemNos= {:>7}'.format( self.designID,
                                                                    self.materialID,
                                                                    self.itemNos )


    def load_brick_data( self, brickname ):
        filename = os.path.join( brick_data_dir, '{}.dat'.format( brickname ) )
        print( 'loading brick data \'{}\' ...'.format( filename ) )

        try:
            f = open( filename, 'r' )
            d = {}
            parts = []
            for line in f:
                line = line.replace( '\n', '' ).lstrip().rstrip()
                if line[0] == '#':
                    continue
                key, val = line.split('=',1)
                if ( key in ( 'descr', 'type', 'file', 'width', 'length', 'depth', 'sx', 'sy', 'sz' ) ):
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
            #print( d )
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
            color = color_table.get( self.materialID, 'lg_unknown' )
            if ( color == 'lg_unknown' ):
                print( 'Warning: Unknown color #{}'.format( self.materialID) )
            descr = defs.get( 'descr', 'unknown brick' )
            for parts in defs['parts']:
                macro = parts[0]
                obj = PovCSGMacro( '#%i %s' % ( self.refID, descr), macrocmd=macro )
                if parts[1] == 'n':
                    obj.set_texture( color )
                elif parts[1] == 'r':
                    obj.set_texture( '{} {}'.format( color,
                                                    #'normal { bumps 0.3 scale 0.02 }' ) )
                                                    'normal { bumps 0.1 scale 2 }' ) )
                objs.append( obj )
            if len( objs ) > 1:
                u = PovCSGUnion( comment=descr )
                u.add( objs )
                obj = u
            else:
                obj = objs[0]

            if 'transformation' in self.__dict__:
                obj.full_matrix = self.transformation
            else:
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
