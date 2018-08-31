"""

pyldd/files.py

Author: Oliver Cordes

History:
 2018-07-27: start project

"""

import xml.etree.ElementTree

from pyldd.bricks import Brick
from pyldd.scene  import Scene


def parse_group( group_tree ):
    bricks = []
    for child in group_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Part':
            brick = Brick( child.attrib )
            bricks.append( brick )

    return bricks


def parse_model( model_tree ):
    bricks = []
    for child in model_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Group' :
            bricks = parse_group( child )

    return bricks


def parse_scene( scene_tree ):
    bricks = []
    for child in scene_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Model' :
            bricks = parse_model( child )

    return Scene( bricks )


def read_ldd_xml_file( filename ):
    e = xml.etree.ElementTree.parse( filename ).getroot()

    for child in e:
        #print(child.tag, child.attrib)
        if child.tag == 'Scene' :
            scene = parse_scene( child )


    return scene
