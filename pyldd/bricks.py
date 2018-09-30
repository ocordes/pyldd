"""

pyldd/bricks.py

Author: Oliver Cordes

History:
 2018-09-30:
   - split colors and known bricks into seperate files
   - start to create a special object for each brick
      -> figures, doors etc.
 2018-08-31: add more bricks
 2018-07-27: start project

"""

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *

import sys, os

from pyldd.povbricks import *
from pyldd.bricks_data import *
from pyldd.colors import *

brick_data_dir = 'brick_data'


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


    def load_brick_data( self, brickname, verbose=True ):
        filename = os.path.join( brick_data_dir, '{}.dat'.format( brickname ) )
        if verbose:
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
                # create special object for the bricks, static one, doors, figures etc.
                obj = PovSimpleBrick( self.refID, descr, macro )
                #obj = PovCSGMacro( '#%i %s' % ( self.refID, descr), macrocmd=macro )
                if parts[1] == 'n':
                    obj.set_texture( color )
                elif parts[1] == 'r':
                    obj.set_texture( '{} {}'.format( color,
                                                    #'normal { bumps 0.3 scale 0.02 }' ) )
                                                    'normal { bumps 0.1 scale 2 }' ) )
                elif parts[1] == 's':
                    pass
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



def list_known_bricks( tosort ):
    list_of_bricks = []
    for brick in known_bricks:
        b = Brick( {} )
        defs = b.load_brick_data( known_bricks[brick][0], verbose=False )
        descr = defs.get( 'descr', 'unknown brick' )
        e = ( brick, descr )
        list_of_bricks.append( e )

    if tosort == 'names':
        items = sorted( list_of_bricks, key=lambda e: e[1])
    else:
        items = sorted( list_of_bricks, key=lambda e: e[0])
    #items = list_of_bricks

    print( '#{} known brick numbers:'.format( len(known_bricks) ) )
    for i in items:
        print( '  # {:>6} : {}'.format( i[0], i[1]) )
