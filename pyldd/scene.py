"""

pyldd/scene.py

Author: Oliver Cordes

History:
 2018-07-27: start project

"""

class Scene( object ):
    def __init__( self, abricks ):
        self.bricks = abricks


    @property
    def nr_bricks( self ):
        return len( self.bricks )


    def gen_material_list( self ):
        mat_list = {}
        for brick in self.bricks:
            if brick.itemNos in mat_list:
                mat_list[brick.itemNos][0] += 1
            else:
                mat_list[brick.itemNos] = [ 1, brick ]

        return mat_list
