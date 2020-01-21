"""

pyldd/studio.py

written by: Oliver Cordes 2020-01-20
changed by: Oliver Cordes 2020-01-20

"""

from pyldd.ldr import LdrFile
import zipFile


secret = 'ny$soho0909%us'



class StudioFile(LdrFile):
    def open(self, filename):
        raise NotImplemented
