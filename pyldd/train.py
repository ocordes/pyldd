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
            self._rotation = prev._rotation
            self._scale = prev._scale
        else:
            self._id = 1
            self._position = position
            self._rotation = rotation
            self._scale = [scale] * 3


        print('Track ID{} added!'.format(self._id))


    def get_pov_obj(self, scene):
        pass


    def get_pov_scene(self):
        scene = create_custom_bricks()
        current = self
        while (current is not None):
            #print(current._id)
            obj = current.get_pov_obj(scene)
            #obj.scale = self._scale
            current = current._next

        scene.scale = self._scale
        return scene


    def new_position(self, offset):
        pos_x = self._position[0] + np.cos(angle(self._rotation[1]))*offset
        pos_y = self._position[1]
        pos_z = self._position[2] + np.sin(angle(self._rotation[1]))*offset

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

        self._end_position = self.new_position(16*LG_BRICK_WIDTH)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '74746', colour='199')
        obj.pre_rotate = [0,-90,0]
        obj.pre_translate = self._position
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

        self._end_position = self.new_position(16*LG_BRICK_WIDTH)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '74747', colour='199')

        if self._left:
            obj.pre_rotate = [0,-90,0]
            obj.pre_translate = self._position
            obj.pre_translate = [0, 0, 3.5*LG_BRICK_WIDTH]
            obj.pre_scale = [-1,1,1]
        else:
            obj.pre_rotate = [0,-90,0]
            obj.pre_translate = self._position
            obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]
        return obj



class TrainTrackPoints(TrainTrack):
    def __init__(self):
        TrainTrack.__init__(self)
        self._left = None
        self._right = None


class TrainTrackLeftPoints(TrainTrackPoints):
    pass


class TrainTrackRightPoints(TrainTrackPoints):
    pass
