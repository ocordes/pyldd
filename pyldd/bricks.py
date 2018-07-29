"""

pyldd/bricks.py

Author: Oliver Cordes

History:
 2018-07-27: start project

"""


class Brick( object ):
    def __init__( self, adict ):
        for name, value in adict.items():
            setattr( self, name, value )



def gen_material_list( bricklist ):
    for brick in bricklist:
        pass
