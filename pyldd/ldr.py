"""

pyldd/ldr.py

written by: Oliver Cordes 2020-01-21
changed by: Oliver Cordes 2020-01-21

"""

from pyldd.scenefile import SceneFile



class LdrFile(SceneFile):
    def open(self, filename):
        raise NotImplemented
