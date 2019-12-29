"""

pyldd/train.py

written by: Oliver Cordes 2019-12-27
changed by: Oliver Cordes 2019-12-28

"""

import numpy as np


from pyldd.lego_defs import *
from pyldd.scene import create_custom_bricks, create_custom_brick


def angle(grad_angle):
    """
    calculates the angle from grad to rad
    """
    return (np.pi / 180) * grad_angle



class TrainTrack(object):
    def __init__(self, prev=None, scale=1,
                       position=[0, 0, 0],
                       rotation=[0, 0, 0],
                       ):
        self._track = None
        self._next = None
        self._prev = prev

        if prev is not None:
            prev._next = self
            self._id = prev._id + 1

            # copy the data from previous track
            self._position = prev._end_position
            self._rotation = prev._end_rotation
            self._scale = prev._scale
        else:
            self._id = 1
            self._position = position
            self._position = [-32*LG_BRICK_WIDTH,0,0]
            self._rotation = rotation
            self._scale = [scale] * 3

        self._end_position = self._position
        self._end_rotation = self._rotation


        print('Track ID{} added!'.format(self._id))


    def get_pov_obj(self, scene):
        pass



    def add_tracks(self, scene, start):
        current = start
        while (current is not None):
            #print(current._id)
            obj = current.get_pov_obj(scene)
            obj.translate = current._position
            obj.rotate = current._rotation
            #obj.scale = self._scale

            if hasattr(current, '_slave'):
                self.add_tracks(scene, current._slave)

            current = current._next


    def get_pov_scene(self):
        scene = create_custom_bricks()
        self.add_tracks(scene, self)
        scene.scale = self._scale
        return scene


    def new_position(self, offset_x, offset_y):
        a = angle(-self._rotation[1])
        print(offset_x, offset_y, self._rotation[1])
        #print(self._position)
        pos_x = self._position[0] + np.cos(a)*offset_x - np.sin(a)*offset_y
        pos_y = self._position[1]
        pos_z = self._position[2] + np.sin(a)*offset_x + np.cos(a)*offset_y

        return [pos_x, pos_y, pos_z]



class TrainTrackStraight(TrainTrack):
    def __init__(self, prev=None, scale=1,
                       position=[0, 0, 0],
                       rotation=[0, 0, 0]
                       ):
        TrainTrack.__init__(self, prev=prev,
                                scale=scale,
                                position=position,
                                rotation=rotation)

        self._end_position = self.new_position(16*LG_BRICK_WIDTH, 0)

        print('PPS', self._position)
        print('PPS', self._end_position)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '74746', colour='199')
        obj.pre_rotate = [0,-90,0]
        obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]
        return obj


class TrainTrackCurve(TrainTrack):
    def __init__(self, prev=None, scale=1,
                       position=[0, 0, 0],
                       rotation=[0, 0, 0],
                       left=True
                       ):
        TrainTrack.__init__(self, prev=prev,
                                scale=scale,
                                position=position,
                                rotation=rotation)

        self._left = left

        a = angle(22.5)
        dx = 40.0*LG_BRICK_WIDTH*np.sin(a)
        dx -= np.sin(a)*LG_WALL_WIDTH
        if self._left:
            dy = -40.0*LG_BRICK_WIDTH*(1-np.cos(a))
            dy -= np.cos(a)*LG_WALL_WIDTH
            self._end_rotation = [0, self._rotation[1]+22.5, 0]
        else:
            dy = 40.0*LG_BRICK_WIDTH*(1-np.cos(a))
            dy += np.cos(a)*LG_WALL_WIDTH
            self._end_rotation = [0, self._rotation[1]-22.5, 0]

        self._end_position = self.new_position(dx, dy)

        #print(self._position)
        #print(self._rotation[1])
        #print(self._end_rotation[1])
        #print(self._end_position)

        print('PPC', self._position)
        print('PPC', self._end_position)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '74747', colour='199')

        if self._left:
            obj.pre_rotate = [0,-90,0]
            obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]
            obj.pre_scale = [1,1,-1]
        else:
            obj.pre_rotate = [0,-90,0]
            obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]
        return obj



class TrainTrackPoints(TrainTrack):
    def __init__(self, prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrack.__init__(self,
                            prev=prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        self._slave = None

        self._end_position = self.new_position(32*LG_BRICK_WIDTH, 0)

        self._end_slave_position = self._position
        self._end_slave_rotation = self._rotation


    def slave(self, el):
        self._slave = el
        el._position = self._end_slave_position
        el._rotation = self._end_slave_rotation

        return el


class TrainTrackLeftPoints(TrainTrackPoints):
    def __init__(self, prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrackPoints.__init__(self,
                            prev=prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        self._end_slave_rotation = [0, self._rotation[1]+22.5, 0]

        a = angle(22.5)
        dx = 40.0*LG_BRICK_WIDTH*np.sin(a)
        dx -= np.sin(a)*LG_BRICK_WIDTH
        dy = -40.0*LG_BRICK_WIDTH*(1-np.cos(a))
        dy += np.cos(a)*LG_WALL_WIDTH

        dx = (32+16)*LG_BRICK_WIDTH-dx
        dy = -10*LG_BRICK_WIDTH+dy

        self._end_slave_position = self.new_position(dx, dy)

        #print('PP', self._end_slave_position)
        #print('PPC', self._end_position)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '75542', colour='199')

        obj.pre_rotate = [0,-90,0]
        obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]

        return obj


class TrainTrackRightPoints(TrainTrackPoints):
    pass
