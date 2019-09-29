"""

pyldd/bricks.py

Author: Oliver Cordes

History:
 2019-05-20:
   - add DecorationMapping
 2019-05-18:
   - change the input type for the brick_data files to ConfigParser
 2019-04-22:
   - change filenames to resource_* for pip installation
 2018-12-14:
   - group figure parts
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
import numpy as np
import configparser
import xml.etree.ElementTree

from pyldd.povbricks import *
from pyldd.bricks_data import *
from pyldd.colors import *

brick_data_dir = 'brick_data'

from pkg_resources import resource_string, resource_filename

decoration_mappings = None

class Brick( object ):
    def __init__( self, adicts ):
        if isinstance( adicts, list ):
            for adict in adicts:
                self._set_attributes( adict )
        else:
            self._set_attributes( adicts )


    def _set_attributes( self, adict ):
        for name, value in adict.items():
            if name in ( 'refID', 'itemNos'):
                setattr( self, name, int( value ) )
            elif name == 'materialID':
                self.materialID = [int(i) for i in value if i != '0']
                if len(self.materialID) == 0:
                    self.materialID = [0]
            elif name in ( 'designID', 'transformation', 'decoration' ):
                setattr( self, name, value )
            else:
                setattr( self, name, float( value ) )

    def __str__( self ):
        return 'designID= {:>5} materialID= {:>3} itemNos= {:>7}'.format( self.designID,
                                                                    self.materialID,
                                                                    self.itemNos )


    def load_brick_data( self, brickname, verbose=True ):
        #filename = os.path.join( brick_data_dir, '{}.dat'.format( brickname ) )
        filename = resource_filename(__name__, '{}/{}.dat'.format(brick_data_dir, brickname))
        if verbose:
            print( 'loading brick data \'{}\' ...'.format( filename ) )


        config = configparser.ConfigParser()
        if len(config.read(filename)) == 0:
            print('WARNING: Cannot read file!')
            return None

        return config


    def _load_decorations_mappings(self):
        global decoration_mappings
        print('Loading DecorationsMappings...')

        filename = resource_filename(__name__, '{}/DecorationMapping.xml'.format(brick_data_dir))

        decoration_mappings = {}

        with open(filename,'r') as xmlfile:
            root = xml.etree.ElementTree.parse(xmlfile).getroot()

            mappings = root.findall('Mapping')
            for mapping in mappings:
                el = decoration_mappings.get(mapping.attrib['decorationID'], None)
                if el is None:
                    el = { mapping.attrib['designID']: []}
                else:
                    el2 = el.get(mapping.attrib['designID'],None)
                    if el2 is None:
                        el[mapping.attrib['designID']] = []
                el[mapping.attrib['designID']].append(int(mapping.attrib['surfaceID']))
                if len(el[mapping.attrib['designID']]) > 1:
                    print(mapping.attrib['decorationID'])
                decoration_mappings[mapping.attrib['decorationID']] = el

        print('Done.')


    def get_pov_object(self):
        if decoration_mappings is None:
            self._load_decorations_mappings()

        if self.designID in known_bricks:
            defs = known_bricks[self.designID]
            if defs[1] is None:
                defs[1] = self.load_brick_data(defs[0])

            defs = defs[1]

            if defs is None:
                return None, None
            objs = []
            color = []
            for mID in self.materialID:
                c = color_table.get(mID, 'lg_unknown')
                if (c == 'lg_unknown'):
                    print('Warning: Unknown color #{}'.format(mID))
                color.append(c)

            obj = PovLEGOBrick(self.refID, self.designID, color, defs,
                                self.decoration, decoration_mappings)

            if 'transformation' in self.__dict__:
                obj.full_matrix = self.transformation
            else:
                ax = self.ax * self.angle
                ay = self.ay * self.angle
                az = self.az * self.angle
                obj.rotate = [ax,ay,az]
                obj.translate = [self.tx,self.ty,self.tz]

            # now apply the macros
            obj.macros = 'L_Transform( {},{},{},{},{},{} )'.format(defs['DEFAULT']['width'],
                                                                   defs['DEFAULT']['depth'],
                                                                   defs['DEFAULT']['length'],
                                                                   defs['DEFAULT']['sx'],
                                                                   defs['DEFAULT']['sy'],
                                                                   defs['DEFAULT']['sz'])
            return obj, '{}.inc'.format(defs['DEFAULT']['file'])
        else:
            print('Brick with designID={} not implemented!'.format(self.designID))
        return None, None



def list_known_bricks(tosort):
    list_of_bricks = []
    for brick in known_bricks:
        b = Brick({})
        defs = b.load_brick_data(known_bricks[brick][0], verbose=False)
        descr = defs['DEFAULT'].get('descr', 'unknown brick')
        e = (brick, descr)
        list_of_bricks.append(e)

    if tosort == 'names':
        items = sorted(list_of_bricks, key=lambda e: e[1])
    else:
        items = sorted(list_of_bricks, key=lambda e: e[0])
    #items = list_of_bricks

    print('#{} known brick numbers:'.format(len(known_bricks)))
    for i in items:
        print('  # {:>6} : {}'.format(i[0], i[1]))
