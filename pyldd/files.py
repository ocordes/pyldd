"""

pyldd/files.py

Author: Oliver Cordes

History:
 2018-11-01: add a handler for decoration attributes
 2018-07-27: start project

"""

import zipfile

import xml.etree.ElementTree

from pyldd.bricks import Brick
from pyldd.rigid_systems import Rigid
from pyldd.scene  import Scene


# some constants
lxfxmlfilename = 'IMAGE100.LXFML'

def str2decoration( s ):
    if ( s in [ '-1', '0', '0,0', '0,0,0' ] ):
        return []
    return s.split( ',' )



def xml4_parse_group( group_tree ):
    bricks = []
    for child in group_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Part':
            brick = Brick( child.attrib )
            bricks.append( brick )

    return bricks


def xml4_parse_model( model_tree ):
    bricks = []
    for child in model_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Group' :
            bricks = xml4_parse_group( child )

    return bricks


def xml4_parse_scene( scene_tree ):
    bricks = []
    for child in scene_tree:
        #print(child.tag, child.attrib)
        if child.tag == 'Model' :
            bricks = xml4_parse_model( child )

    return Scene( bricks )


def lxml_parse_bricks(bricks_tree):
    bricks = []
    print('Parse the bricks ...')
    for ebrick in bricks_tree:
        attr = ebrick.attrib
        # some bricks are consists of several small bricks
        parts = ebrick.findall('Part')
        for part in parts:
            material = part.attrib['materials']
            attr['designID'] = part.attrib['designID']
            attr['materialID'] = material.split(',',maxsplit=1)[0]
            attr['decoration'] = str2decoration(part.attrib.get('decoration', '-1'))
            bone = part.find('Bone')
            attr['transformation'] = bone.attrib['transformation']
            brick = Brick(attr)
            bricks.append(brick)

    return bricks


def lxml_parse_rigidsystems(rsystems_tree):
    rigids = []
    joints = []
    print('Parse the rigid sytems...')
    for ersystem in rsystems_tree:
        erigids = ersystem.findall('Rigid')
        for erigid in erigids:
            rigid = Rigid(erigid.attrib)
            rigids.append(rigid)

    print('{} rigid systems detected'.format(len(rigids)))

    return rigids, joints


# check_lxf_file
#
# checks if filename a a zipped file and the archive
# contains the file lxfxmlfilename otherwise returns
# False
#
def check_lxf_file( filename ):
    if ( zipfile.is_zipfile( filename ) == False ):
        return False

    with zipfile.ZipFile( filename, 'r') as f:
        try:
            f.getinfo( lxfxmlfilename )
        except KeyError:
            return False

    return True


# parse_xml_file
#
# parses the xml tree, the difference in type is the
# existence of the Scene element which is only in the
# lxml4 tree
#
def parse_xml_file(root, rigid_system):
    child = root.find('Scene')
    if child is None:
        # print( 'lxml file type' )
        ebricks = root.find('Bricks')
        bricks = lxml_parse_bricks(ebricks)
        if rigid_system:
            ersystems = root.find('RigidSystems')
            rigids, joints = lxml_parse_rigidsystems(ersystems)
        else:
            rigids = None
        print('Parsing done.')
        print('Creating scene...')
        scene = Scene(bricks, rigids)
        print('Scene is complete!')

    else:
        scene = xml4_parse_scene(child)

    return scene


# read_ldd_lxf_file
#
# reads a lxf file, which means to look for the zipped
# lxfxmlfilename in the archive and reads this xml file
#
def read_ldd_lxf_file(filename, rigid_system):
    scene = None
    with zipfile.ZipFile(filename, 'r') as f:
        with f.open(lxfxmlfilename) as xmlfile:
            e = xml.etree.ElementTree.parse(xmlfile).getroot()

            scene = parse_xml_file(e, rigid_system)

    return scene


# read_ldd_xml_file
#
# reads a plain xml file
#
def read_ldd_xml_file(filename):
    e = xml.etree.ElementTree.parse(filename).getroot()

    return( parse_xml_file(e, False))


# read_ldd_file
#
# reads the the ldd file filename
#
#  checks if there is plain xml file or a zipped ldd file
#
def read_ldd_file(filename, rigid_system):
    if check_lxf_file(filename):
        scene = read_ldd_lxf_file(filename, rigid_system)
    else:
        scene = read_ldd_xml_file(filename)
    return scene
