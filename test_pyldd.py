#!/usr/bin/env python

"""

test_pyldd.py

Author: Oliver Cordes

History:
 2018-07-27: start project


"""


from  pyldd.files import read_ldd_xml_file

import sys
import getopt



def usage():
     print( 'Usage: {} [options]'.format( sys.argv[0] ) )
     print( ' Options:' )
     print( ' -m | --material_list : shows the list of used bricks with amounts ')
     print( ' -p | --povray=file   : exports the file to povray ')
     print( ' -d | --declare=name  : name of the generated povray declare object [default=scene]')

#  main

# parse command line

declare_name = 'scene'

shortopts = 'mp:d:'
longopts = [ '--material_list', '--povray=', '--declare=' ]

try:
    opts, args = getopt.getopt( sys.argv[1:], shortopts, longopts )
except getopt.GetoptError as err:
    # print help information and exit:
    print( err ) # will print something like "option -a not recognized"
    usage()
    sys.exit( 2 )

if len( args ) < 1:
    print( 'No LDD XML file given!')
    sys.exit( 2 )

# now read the ldd xml file
lego_scene = read_ldd_xml_file( args[0] )
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
