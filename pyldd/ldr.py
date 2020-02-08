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
                '3003.dat': '3003',
                '3004.dat': '3004',
                '3005.dat': '3005',
                '3023.dat': '3023',
                '3867.dat': '3867',
                '4740.dat': '4740',
                '4733.dat': '4733',
                '6636.dat': '6636',
                '4275b.dat': '4275',
                '4276b.dat': '4276',
}


def getldrbrick(s):
    if s in ldr_bricks:
        return ldr_bricks[s], True
    return s, False


def getldrtrafo(t, brick=True):
    nt = t.copy()
    nt[0:9] = t[3:12]
    nt[9:12] = t[0:3] * 0.04
    nt[10] = -nt[10]

    # y = nt[0:9]
    # # check for special rotation matrix
    # x = np.array([0.0,0.0,-1.0,-1.0,0.0,0.0,0.0,1.0,0.0])
    # if np.all(np.isclose(x,y)):
    #     nt[0:9] = np.array([0.,-1.,0.,0.,0.,-1.,1.,0.,0.])
    #
    # x = np.array([0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,-1.0])
    # if np.all(np.isclose(x,y)):
    #     nt[0:9] = np.array([0.,1.,0.,-1.,0.,0.,0.,0.,1.])
    #
    # x = np.array([0.0,0.0,-1.0,1.0,0.0,0.0,0.0,-1.0,0.0])
    # if np.all(np.isclose(x,y)):
    #     nt[0:9] = np.array([0.,-1.,0.,0.,0.,1.,-1.,0.,0.])

    # create new sorting
    nt[0:9] = nt[[0,3,6,1,4,7,2,5,8]]


    # mirror matrix which should be applied to bricks
    # not to groups
    mmatrix = np.array([[-1.0, 0.0, 0.0],
                        [0.0, 1.0, 0.0],
                        [0.0, 0.0, -1.0]])

    # recreate trafo matrix
    m = nt[0:9].reshape((3,3))

    print('det=',np.linalg.det(m))
    if brick:
        # apply mirror ...
        nt[0:9] = np.dot(m, mmatrix).flatten()

    return nt


def trafo2matrix(t):
    m = np.array([[2,0,0,0],
                 [0,2,0,0],
                 [0,0,2,0],
                 [0,0,0,1]], dtype=np.float64)

    m[0:3,0:3] = t[0:9].reshape((3,3))
    m[0:3,3] = t[9:12]

    #print('t=', t)
    #print('m=', m)

    return m


def matrix2trafo(m):
    t = np.array([1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0], dtype=np.float64)
    t[0:9] = m[0:3,0:3].flatten()
    t[9:12] = m[0:3,3]

    return t


def trafo_dot_trafo(t1, t2):
    t1 = trafo2matrix(t1)
    t2 = trafo2matrix(t2)
    t = np.dot(t1, t2)
    return matrix2trafo(t)


class LdrBrick(object):
    def __init__(self, line):
        print('line:', line)
        sline = line.split()
        self._ldrname = sline[-1]
        self._itemno, self._isbrick = getldrbrick(self._ldrname)

        self._trafo = getldrtrafo(np.array(sline[1:13], dtype=np.float64),brick=self._isbrick)
        self._color = getldrcolors(int(sline[0]))

        print(self._itemno)

        if self._isbrick:
            self._ldd_trafo = ldr2lddtrafo(self._ldrname)

        self._sub_file = None


    def get_min_height(self):
        if self._isbrick:
            return self._trafo[10]+self._ldd_trafo[10]
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
            b = create_custom_brick(scene, self._itemno,
                                    transformation = self._trafo,
                                    #transformation = t,
                                    colour='{}'.format(self._color))
            b.pre_full_matrix = self._ldd_trafo
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

            #scene.pre_scale = [-1,1,1]
            #scene.pre_rotate = [0,180,0]
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
