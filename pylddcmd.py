#!/usr/bin/env python

"""

test_pyldd.py

Author: Oliver Cordes

History:
 2018-09-03: move from lxml/lxml4 files to lxf files
 2018-07-27: start project


"""

version = 'V0.1 2018-09-13'


from pyldd.files import read_ldd_file
from pyldd.bricks import list_known_bricks

import sys
import getopt



def usage():
     print( 'Usage: {} [options]'.format( sys.argv[0] ) )
     print( ' Options:' )
     print( ' -m | --material_list : shows the list of used bricks with amounts ')
     print( ' -p | --povray=file   : exports the file to povray ')
     print( ' -d | --declare=name  : name of the generated povray declare object [default=scene]')
     print( '      --bs            : show all known bricks (sorted for names)')
     print( '      --bn            : show all known bricks (sorted for numbers)')
     print( ' -v | --version       : show version')


def print_version():
    print( 'Version: {}'.format( version ))

#  main

# parse command line

declare_name = 'scene'

shortopts = 'mp:d:v'
longopts = [ 'material_list', 'povray=', 'declare=',
             'bs', 'bn', 'version' ]

try:
    opts, args = getopt.getopt( sys.argv[1:], shortopts, longopts )
except getopt.GetoptError as err:
    # print help information and exit:
    print( err ) # will print something like "option -a not recognized"
    usage()
    sys.exit( 2 )



for o, a in opts:
    if o == '--bs':
        list_known_bricks( 'names' )
        sys.exit( 0 )
    elif o == '--bn':
        list_known_bricks( 'numbers' )
        sys.exit( 0 )
    elif o in ('-v', '--version' ):
        print_version()
        sys.exit( 0 )

# at this point we need a XML file ...

if len( args ) < 1:
    print( 'No LDD XML file given!')
    sys.exit( 2 )


# now read the ldd xml file
lego_scene = read_ldd_file( args[0] )
print( 'Scene contains {} LEGO bricks'.format( lego_scene.nr_bricks ) )

for o, a in opts:
    if o in ( '-m', '--material_list' ):
        mat_list = lego_scene.gen_material_list()
        for i,val in mat_list.items():
            print( '{:>3}x {}'.format( val[0], val[1] ) )
    elif o in ( '-p', '--povray' ):
        povfile = a
        lego_scene.generate_povfile( povfile, declare_name )
    elif o in ( '-d', '--declare' ):
        declare_name = a




print( 'Done.' )