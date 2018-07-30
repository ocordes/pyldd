#!/usr/bin/env python

"""

test_pyldd.py

Author: Oliver Cordes

History:
 2018-07-27: start project


"""


from  pyldd.files import read_ldd_xml_file


#  main

#lego_scene = read_ldd_xml_file( '/Users/ocordes/ownCloud/Lego/Models/Einkaufsliste.lxfml' )
lego_scene = read_ldd_xml_file( '/Users/ocordes/ownCloud/Lego/Models/Haus_test2.lxfml' )

print( 'Scene contains {} LEGO bricks'.format( lego_scene.nr_bricks ) )

mat_list = lego_scene.gen_material_list()

for i,val in mat_list.items():
    print( '{:>3}x {}'.format( val[0], val[1] ) )

print( 'Done.' )
