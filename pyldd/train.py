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


def add_array(a, x, atol=0.01):
    if a is None:
        return x, True
    else:
        closed = np.isclose(a[-1], x[0], atol=atol)
        #print('AA', a[-1], x[0])
        return np.concatenate((a, x)), closed


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
            #self._position = [-32*LG_BRICK_WIDTH,0,0]
            self._rotation = rotation
            self._scale = [scale] * 3

        self._end_position = self._position
        self._end_rotation = self._rotation


        print('Track ID{} added!'.format(self._id))


    def get_pov_obj(self, scene):
        return None


    def add_tracks(self, scene, start):
        current = start
        while (current is not None):
            #print(current._id)
            obj = current.get_pov_obj(scene)
            if obj is not None:
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


    def get_train_track_data(self, prev):
        return np.array([self._position[0], self._end_position[0]])*self._scale[0], \
               np.array([self._position[1], self._end_position[1]])*self._scale[1], \
               np.array([self._position[2], self._end_position[2]])*self._scale[2], \
               self._next


    def get_train_track(self):
        prev = None
        current = self

        data_x = None
        data_y = None
        data_z = None

        while current is not None:
            x, y, z, next = current.get_train_track_data(prev)
            data_x, closed = add_array(data_x, x)
            data_y, closed = add_array(data_y, y)
            data_z, closed = add_array(data_z, z)
            prev = current
            current = next

        return data_x, data_y, data_z


    def new_position(self, offset_x, offset_y):
        a = angle(-self._rotation[1])
        #print(offset_x, offset_y, self._rotation[1])
        #print(self._position)
        pos_x = self._position[0] + np.cos(a)*offset_x - np.sin(a)*offset_y
        pos_y = self._position[1]
        pos_z = self._position[2] + np.sin(a)*offset_x + np.cos(a)*offset_y

        #print('CC', np.cos(a)*offset_x - np.sin(a)*offset_y)
        #print('CC', np.sin(a)*offset_x + np.cos(a)*offset_y)

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

        #print('PPS', self._position)
        #print('PPS', self._end_position)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '74746', colour='199')
        obj.pre_rotate = [0,-90,0]
        obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]
        return obj


    def get_train_track_data(self, prev):
        num_elements = 100
        x = np.linspace(self._position[0], self._end_position[0], num_elements)
        y = np.linspace(self._position[1], self._end_position[1], num_elements)
        z = np.linspace(self._position[2], self._end_position[2], num_elements)
        return x*self._scale[0], \
               y*self._scale[1], \
               z*self._scale[2], \
               self._next


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

        #print('PPC', self._position)
        #print('PPC', self._end_position)
        #print('PPC', self._end_rotation[1])


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


    def get_train_track_data(self, prev):
        num_elements = 100
        # Mx = 0
        # if self._left:
        #     My = -40*LG_BRICK_WIDTH
        # else:
        #     My = 40*LG_BRICK_WIDTH
        #
        # My = -40*LG_BRICK_WIDTH
        #
        # M = self.new_position(Mx, My)
        #
        # print(M)
        #
        # alpha = np.linspace(self._rotation[1], self._end_rotation[1], num_elements, endpoint=True)
        # alpha *= np.pi / 180.
        # alpha2 = np.linspace(0, 22.5, num_elements, endpoint=True) * np.pi / 180.
        # x = M[0]+40*LG_BRICK_WIDTH*np.sin(alpha)
        # x -= np.sin(alpha2)*LG_WALL_WIDTH
        # #x -= M[0]
        # if self._left:
        #     z = M[2]+40*LG_BRICK_WIDTH*np.cos(alpha)
        #     z -= np.sin(alpha2)*0.3863
        # else:
        #     z = M[2]-40*LG_BRICK_WIDTH*np.cos(alpha)
        #     z += np.sin(alpha2)*0.3863
        #
        # #z -= M[2]
        # #y = np.linspace(self._position[1], self._end_position[1], num_elements)


        # alternative
        a = np.linspace(0, 22.5, num_elements)
        a *= np.pi / 180.
        #a = angle(22.5)
        dx = 40.0*LG_BRICK_WIDTH*np.sin(a)
        dx -= np.sin(a)*LG_WALL_WIDTH
        if self._left:
            dy = -42.0*LG_BRICK_WIDTH*(1-np.cos(a))
            #dy -= np.cos(a)*LG_WALL_WIDTH
        else:
            dy = 42.0*LG_BRICK_WIDTH*(1-np.cos(a))
            #dy += np.cos(a)*LG_WALL_WIDTH

        positions = self.new_position(dx, dy)

        x = positions[0]
        y = np.linspace(self._position[1], self._end_position[1], num_elements)
        z = positions[2]

        # print('TDa', alpha[0], alpha[-1])
        # print('TDx', x[0], x[-1])
        # print('FDx', self._position[0], self._end_position[0])
        # print('TDz', z[0], z[-1])
        # print('FDz', self._position[2], self._end_position[2])

        return x*self._scale[0], \
               y*self._scale[1], \
               z*self._scale[2], \
               self._next


class TrainTrackSlave(TrainTrack):
    def __init__(self, prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0],
                        end_position=[0, 0, 0],
                        end_rotation=[0, 0, 0]):
        TrainTrack.__init__(self,
                            prev=prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        self._end_position = end_position
        self._end_rotation = end_rotation


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



class TrainTrackLeftPoints(TrainTrackPoints):
    def __init__(self, prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrackPoints.__init__(self,
                            prev=prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        end_slave_rotation = [0, self._rotation[1]+22.5, 0]

        # the idea is to have a coordinates which we know
        # after adding a left right curve


        # # simulate a curve track
        # a = angle(22.5)
        # dx = 40.0*LG_BRICK_WIDTH*np.sin(a)
        # dx -= np.sin(a)*LG_WALL_WIDTH
        # dy = 40.0*LG_BRICK_WIDTH*(1-np.cos(a))
        # dy += np.cos(a)*LG_WALL_WIDTH
        #
        # # apply the negative rotation
        # ndx = np.cos(-a)*dx - np.sin(-a)*dy
        # ndy = np.sin(-a)*dx + np.cos(-a)*dy
        #
        #
        # # use the end coordinates after having a curve added
        # # minus the simulated curve!
        # dx = (32+16)*LG_BRICK_WIDTH-ndx
        # dy = -16*LG_BRICK_WIDTH-ndy

        dx = 26.154130164317134
        dy = -10.524145040361176

        end_slave_position = self.new_position(dx, dy)

        #print('TTS', end_slave_position)
        #print('TTS', self._end_position)

        self._slave = TrainTrackSlave(end_position=end_slave_position,
                                        end_rotation=end_slave_rotation)


    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '75542', colour='199')

        obj.pre_rotate = [0,-90,0]
        obj.pre_translate = [0, 0, -3.5*LG_BRICK_WIDTH]

        return obj



class TrainTrackRightPoints(TrainTrackPoints):
    pass



class TrainTrackPointsRev(TrainTrack):
    def __init__(self, prev=None, slave_prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrack.__init__(self,
                            prev=prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        self._slave_prev = slave_prev

        self._end_position = self.new_position(32*LG_BRICK_WIDTH, 0)



    def check_slave_connection(self):
        pass


class TrainTrackLeftPointsRev(TrainTrackPointsRev):
    def __init__(self, prev=None, slave_prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrackPointsRev.__init__(self,
                            prev=prev,
                            slave_prev=slave_prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)



class TrainTrackRightPointsRev(TrainTrackPointsRev):
    def __init__(self, prev=None, slave_prev=None, scale=1,
                        position=[0, 0, 0],
                        rotation=[0, 0, 0]):
        TrainTrackPointsRev.__init__(self,
                            prev=prev,
                            slave_prev=slave_prev,
                            scale=scale,
                            position=position,
                            rotation=rotation)

        # take the coordinates from not rev points
        dx = 26.154130164317134
        dy = -10.524145040361176
        a = angle(-22.5)

        ndx = 32*LG_BRICK_WIDTH-dx
        ndy = dy

        self._slave_position = self.new_position(ndx, ndy)

        if self.check_slave_connection() == False:
            print('WARNING: elements missing, GAP for slave path detected!')



    def check_slave_connection(self):
        #print('Check slave connection:')
        #print(self._slave_position)
        #print(self._slave_prev._end_position)

        return np.allclose(np.abs(np.array(self._slave_position)-np.array(self._slave_prev._end_position)),
                    0.0, atol=0.5*LG_BRICK_WIDTH)



    def get_pov_obj(self, scene):
        obj = create_custom_brick(scene, '75541', colour='199')

        obj.pre_rotate = [0,90,0]
        obj.pre_translate = [31*LG_BRICK_WIDTH, 0, 3.5*LG_BRICK_WIDTH]

        return obj
