"""

pyldd/ldr.py

written by: Oliver Cordes 2020-01-27
changed by: Oliver Cordes 2020-01-27

"""

import numpy as np

from pyldd.scenefile import SceneFile
from pyldd.povbricks import PovLEGOModel, PovLEGOBrick
from pyldd.scene import create_custom_brick, create_custom_bricks, lego_transform_macro
from pyldd.ldr_colors import getldrcolors
from pyldd.ldr_trafo import ldr2lddtrafo




ldr_bricks = {
                '2412b.dat': '2412',
                '3867.dat': '3867',
                '4733.dat': '4733',
}


def getldrbrick(s):
    if s in ldr_bricks:
        return ldr_bricks[s], True
    return s, False


def getldrtrafo(t):
    nt = t.copy()
    nt[0:9] = t[3:12]
    nt[9:12] = t[0:3] * 0.04
    return nt


class LdrBrick(object):
    def __init__(self, line):
        print('line:', line)
        sline = line.split()
        self._ldrname = sline[-1]
        self._trafo = getldrtrafo(np.array(sline[1:13], dtype=np.float64))
        self._color = getldrcolors(int(sline[0]))
        self._itemno, self._isbrick = getldrbrick(self._ldrname)
        print(self._itemno)

        if self._isbrick:
            self._ldd_trafo = ldr2lddtrafo(self._ldrname)

        self._sub_file = None


    def get_min_height(self):
        if self._isbrick:
            return self._trafo[10]
        else:
            return 0.0

    def get_sub_file(self, groups, name):
        name = name.lower()
        for i in groups:
            if i._name.lower() == name:
                return i
        return None


    def get_brick(self, nr, scene, groups):
        #brick = PovLEGOBrick(nr, itemNos, color, config,
        #              decoration, decoration_mappings):

        if self._isbrick:
            #trafo = np.array([1.,0.,0.,0.,1.,0.,0.,0.,1.,0.,0.,0.])
            b = create_custom_brick(scene, self._itemno,
                                    transformation = self._trafo,
                                    colour='{}'.format(self._color))
            b.pre_matrix = self._ldd_trafo
        else:
            print('including sub {}'.format(self._itemno))
            self._sub_file = self.get_sub_file(groups, self._itemno)
            if self._sub_file is None:
                print('WARNING: sub-file `{}` not found!'.format(self._itemno))
            else:
                sub_model = self._sub_file.get_model(groups=groups)
                sub_model.full_matrix = self._trafo
                scene.add(sub_model)



class BrickGroup(object):
    def __init__(self, name):
        self._name = name
        self._bricks = []
        self._min_height = 1e100

        print('File start ->', name)


    def add(self, brick):
        self._bricks.append(brick)


    def get_model(self, first=False, groups=None):
        scene = PovLEGOModel()

        if first:
            scene.add_include('lg_color2.inc')
            scene.add_include('lg_defs.inc')

            scene.pre_scale = [-1,1,1]
            scene.pre_rotate = [0,180,0]
            scene.add_macro(lego_transform_macro)

        nr = 1
        min = 1e100
        for b in self._bricks:
            b.get_brick(nr, scene, groups=groups)
            min = b.get_min_height()
            if min < self._min_height:
                self._min_height = min

            nr += 1

        return scene


    def get_min_height(self):
        return self._min_height


class LdrFile(SceneFile):
    def __init__(self):
        SceneFile.__init__(self)
        self.brick_groups = []


    def parse(self, f):
        brick_group = None
        name = 'unknown'
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
                    name = metacmd[1]
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
                if brick_group is None:
                    # if only bricks no subfiles are around
                    # create a default group
                    brick_group = BrickGroup(name)
                brick_group.add(brick)
            else:
                print(sline)

        # if only bricks and no subfiles are around
        # add this default group
        if len(self.brick_groups) == 0:
            self.brick_groups.append(brick_group)
        print('groups:', len(self.brick_groups))


    def open(self, filename):
        with f.open(filename) as ldrfile:
            self.parse(ldrfile)


    def model(self):
        # create the scene from the first group which is
        # the main file
        scene = self.brick_groups[0].get_model(first=True,
                                                groups=self.brick_groups)

        min_height = self.brick_groups[0].get_min_height()
        print('min_height:', min_height)
        # correct the model to zero level ...
        scene.pre_translate = [0, -min_height, 0]
        return scene
