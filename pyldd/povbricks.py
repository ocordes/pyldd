"""

pyldd/povbricks.py

Author: Oliver Cordes

History:
 2018-09-30:
   - start to create a special object for each brick
      -> figures, doors etc.

"""


from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *


class PovSimpleBrick( PovCSGMacro ):
    def __init__( self, nr, descr, cmd ):
        PovCSGMacro.__init__( self, '#%i %s' % ( nr, descr), macrocmd=cmd )
