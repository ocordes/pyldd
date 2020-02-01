"""

pyldd/ldr.py

written by: Oliver Cordes 2020-01-27
changed by: Oliver Cordes 2020-01-27

"""

import numpy as np

from pyldd.scenefile import SceneFile
from pyldd.povbricks import PovLEGOModel, PovLEGOBrick
from pyldd.scene import create_custom_brick, create_custom_bricks, lego_transform_macro



ldr_bricks = {
                '3867.dat': '3867',
                '4733.dat': '4733',
}


def getldrbrick(s):
    if s in ldr_bricks:
        return ldr_bricks[s], True
    return s, False


class LdrBrick(object):
    def __init__(self, line):
        print('line:', line)
        sline = line.split()
        self._trafo = np.array(sline[1:13], dtype=np.float64)
        self._color = sline[0]
        self._itemno, self._isbrick = getldrbrick(sline[-1])
        print(self._itemno)

    def get_brick(self, nr, scene, groups):
        #brick = PovLEGOBrick(nr, itemNos, color, config,
        #              decoration, decoration_mappings):

        if self._isbrick:
            trafo = np.array([1.,0.,0.,0.,1.,0.,0.,0.,1.,0.,0.,0.])
            create_custom_brick(scene, self._itemno,
                                transformation = trafo,
                                colour='194')
        else:
            pass


class BrickGroup(object):
    def __init__(self, name):
        self._name = name
        self._bricks = []

        print('File start ->', name)


    def add(self, brick):
        self._bricks.append(brick)


    def get_model(self, first=False, groups=None):
        scene = PovLEGOModel()

        if first:
            scene.add_include('lg_color2.inc')
            scene.add_include('lg_defs.inc')

            scene.scale = [-1,1,1]
            scene.rotate = [0,180,0]
            scene.add_macro(lego_transform_macro)

        nr = 1
        for b in self._bricks:
            b.get_brick(nr, scene, groups=groups)
            nr += 1


        return scene


class LdrFile(SceneFile):
    def __init__(self):
        SceneFile.__init__(self)
        self.brick_groups = []


    def parse(self, f):
        brick_group = None
        for line in f:
            # change from binary to ascii
            line = line.decode('utf-8')
            # line shaping
            line = line.replace('\r', '').replace('\n', '')

            # extract line type:
            sline = line.split(' ', 1)

            if (sline[0] == '0') or (line[0] == '\ufeff'):
                # Comments and META cmds
                metacmd = sline[1].split(' ', 1)
                if metacmd[0] == 'FILE':
                    # file start
                    brick_group = BrickGroup(metacmd[1])
                elif metacmd[0] == 'NOFILE':
                    # file end
                    if brick_group is not None:
                        self.brick_groups.append(brick_group)
                        brick_group = None
                    print('File end')
                elif metacmd[0] == 'Name:':
                    #print('Sub-File:', metacmd[1])
                    pass
                elif metacmd[0] == 'NumOfBricks:':
                    pass
                elif metacmd[0] == 'CustomBrick':
                    pass
                elif metacmd[0] == 'Author:':
                    pass
                else:
                    #print(sline[1])
                    pass
            elif sline[0] == '1':
                # line command
                brick = LdrBrick(sline[1])
                brick_group.add(brick)
            else:
                print(sline)
        print('groups:', len(self.brick_groups))


    def open(self, filename):
        with f.open(filename) as ldrfile:
            self.parse(ldrfile)


    def model(self):
        # create the scene from the first group which is
        # the main file
        scene = self.brick_groups[0].get_model(first=True,
                                                groups=self.brick_groups)

        return scene
