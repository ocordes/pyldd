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

    def __str__( self ):
        return 'designID= {:>5} materialID= {:>3} itemNos= {:>7}'.format( self.designID,
                                                                    self.materialID,
                                                                    self.itemNos )
