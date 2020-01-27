"""

pyldd/ldr.py

written by: Oliver Cordes 2020-01-27
changed by: Oliver Cordes 2020-01-27

"""

from pyldd.scenefile import SceneFile


from pyldd.povbricks import PovLEGOModel, PovLEGOBrick


class LdrBrick(object):
    def __init__(self, line):
        pass

    def get_brick(self, nr):
        #brick = PovLEGOBrick(nr, itemNos, color, config,
        #              decoration, decoration_mappings):

        return None


class BrickGroup(object):
    def __init__(self, name):
        self._name = name
        self._bricks = []

        print('File start ->', name)


    def add(self, brick):
        self._bricks.append(brick)


    def get_model(self):
        nr = 1
        for b in self._bricks:
            brick = b.get_brick(nr)
            nr += 1



class LdrFile(SceneFile):
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
                print('line:', sline[1])
                brick = LdrBrick(sline[1])
                brick_group.add(brick)
            else:
                print(sline)


    def open(self, filename):
        with f.open(filename) as ldrfile:
            self.parse(ldrfile)


    def model(self):
        m = PovLEGOModel()
