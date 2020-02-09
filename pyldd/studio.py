"""

pyldd/studio.py

written by: Oliver Cordes 2020-01-20
changed by: Oliver Cordes 2020-01-26

"""

from pyldd.ldr import LdrFile
import zipfile

secret = b'ny$soho0909%us'
model_file = 'model.ldr'


class StudioFile(LdrFile):
    def open(self, filename):
        print('Reading \'%s\' ...' % filename)
        with zipfile.ZipFile(filename, 'r') as f:
            f.setpassword(secret[3:11])
            with f.open(model_file) as ldrfile:
                self.parse(ldrfile)
        print('Reading \'%s\' done.' % filename)
