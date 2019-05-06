"""

pyldd/rigid_systems.py

written by: Oliver Cordes 2019-05-05
changed by: Oliver Cordes 2019-05-06

"""

from pypovlib.pypovobjects import *
from pyldd.povbricks import *

import numpy as np



def _csv_to_list(s, numtype):
    return np.array([numtype(i) for i in s.split(',')], dtype=numtype)


class BrickBaseObject(object):
    def __init__(self, adicts):
        if isinstance(adicts, list):
            for adict in adicts:
                self._set_attributes(adict)
        else:
            self._set_attributes(adicts)


    def _set_attributes(self, adicts):
        pass


class Rigid(BrickBaseObject):
    def _set_attributes(self, adict):
        for name, value in adict.items():
            if name in ('refID'):
                setattr(self, name, int(value))
            elif name in ('transformation'):
                setattr(self, name, _csv_to_list(value, float))
            elif name in ('boneRefs'):
                setattr(self, name, _csv_to_list(value, int))


    def __str__(self):
        return 'Rigid: nr={} transformation={}  boneRefs={}'.format(self.refID, self.transformation, self.boneRefs)


class RigidRef(BrickBaseObject):
    def _set_attributes(self, adict):
        for name, value in adict.items():
            if name in ('rigidRef'):
                setattr(self, name, int(value))
            elif name in ('a', 'z', 't'):
                setattr(self, name, _csv_to_list(value, float))


class Joint(BrickBaseObject):
    def __init__(self, adict, a, b):
        BrickBaseObject.__init__(self, adict)
        self._a = a
        self._b = b


    def _set_attributes(self, adict):
        for name, value in adict.items():
            setattr(self, name, value)


def create_rigid_model(bricks, rigid):
    #if len(rigid.boneRefs) == 1:
    #    # only one Element in a rigid def, then return only the brick itself
    #    rigid_model, include_list =
    rigid_model = PovRigidModel()

    known_bricks = 0
    unknown_bricks = 0

    includes = []
    parts = []
    for bricknr in rigid.boneRefs:
        brick = bricks[bricknr]

        pov_part, include_list = brick.get_pov_object()
        if pov_part is None:
            unknown_bricks += 1
        else:
            pov_part.fix_rigid_trafo(rigid.transformation)
            parts.append(pov_part)
            includes.append(include_list)
            known_bricks += 1

    if len(parts) == 1:
        rigid_model = parts[0]
        # clear the wrong trafo
        rigid_model.full_matrix = None
    else:
        rigid_model.add(parts)

    # add all necessary includes
    rigid_model.add_include(includes)

    # apply the traformation if available
    if 'transformation' in rigid.__dict__:
        rigid_model.full_matrix = rigid.transformation

    return rigid_model, known_bricks, unknown_bricks
