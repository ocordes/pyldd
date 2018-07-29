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
