#!/usr/bin/env python

"""

test_pyldd.py

Author: Oliver Cordes

History:
 2018-07-27: start project


"""


from  pyldd.files import read_ldd_xml_file

#  main

lego_scene = read_ldd_xml_file( '/Users/ocordes/ownCloud/Lego/Models/Einkaufsliste.lxfml' )

print( 'Scene contains {} LEGO bricks'.format( lego_scene.nr_bricks ) )

print( 'Done.' )
