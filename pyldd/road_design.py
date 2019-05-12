"""

pyldd/road_design.py

written by: Oliver Cordes 2019-05-12
changed by: Oliver Cordes 2019-05-12
"""

from pyldd.scene import create_custom_bricks, create_custom_brick
from pyldd.lego_defs import *


def create_road_matrix(road_design=None,center=True):
    if road_design is None:
        return None

    union = create_custom_bricks()

    rownr = 0
    for rows in road_design:
        colnr = 0
        for cols in rows:
            if cols is not None:
                obj = create_custom_brick(union, cols[0])

                if cols[1] == 0:
                    extra_trans_x = 0
                    extra_trans_z = 0
                elif cols[1] in (90,):
                    extra_trans_x = 31
                    extra_trans_z = 0
                elif cols[1] in (-90,270):
                    extra_trans_x = 0
                    extra_trans_z = -31
                elif cols[1] in (-180,180):
                    extra_trans_x = 31
                    extra_trans_z = -31
                else:
                    raise ValueError('Wrong angle for road map matrix given \'{}\'!'.format(cols[1]))
                obj.translate = [(colnr*32+extra_trans_x)*LG_BRICK_WIDTH,0,(rownr*32+extra_trans_z)*LG_BRICK_WIDTH]
                obj.rotate = [0,cols[1],0]

            colnr += 1

        rownr += 1

    if center:
        union.translate = [(-len(road_design[0]))*16*LG_BRICK_WIDTH/2.,0,
                           (len(road_design)-2)*16*LG_BRICK_WIDTH/2.]

    return union
