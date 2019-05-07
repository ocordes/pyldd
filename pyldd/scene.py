"""

pyldd/scene.py

Author: Oliver Cordes

History:
 2019-05-06: add joints in addition to the rigid systems
 2019-05-05: add rigid systems
 2018-07-27: start project

"""

from pypovlib import *              # thought this should be enough
from pypovlib.pypovanimation import *
from pypovlib.pypovobjects import *
from pypovlib.pypovtextures import *
from pyldd.povbricks import *
from pyldd.rigid_systems import *



lego_transform_macro = """
// create a macro for system LEGO transformation
#macro L_Transform( WIDTH, HEIGHT, LENGTH, SX, SY, SZ )
transform{
scale <-1.000000,-1.000000,1.000000>
rotate <-90.000000,-90.000000,0.000000>  // rotate back into xz plane
// apply the centroid
scale <SX,SY,SZ>
translate <LG_BRICK_WIDTH*WIDTH/2.,LG_BRICK_HEIGHT*HEIGHT,-LG_BRICK_WIDTH*LENGTH/2.>
}
#end
"""

class Scene(object):
    def __init__(self, abricks, rigids=None, joints=None):
        self.bricks = abricks
        self.rigids = rigids
        self.joints = joints


    @property
    def nr_bricks(self):
        return len(self.bricks)


    def gen_material_list(self):
        mat_list = {}
        for brick in self.bricks:
            if brick.itemNos in mat_list:
                mat_list[brick.itemNos][0] += 1
            else:
                mat_list[brick.itemNos] = [1, brick]

        return mat_list


    def generate_povlist(self, python_model):
        known_bricks = 0
        unknown_bricks = 0

        print('Creating povray structure...')

        if self.rigids is None:
            print('python_model=%s' % python_model)
            if (python_model == 'figure'):
                scene = PovBrickFigure()
            else:
                scene = PovBrickModel()

            scene.add_include('lg_color2.inc')
            scene.add_include('lg_defs.inc')


            for brick in self.bricks:
                pov_part, include_list = brick.get_pov_object()
                if pov_part is None:
                    unknown_bricks += 1
                else:
                    scene.add(pov_part)
                    scene.add_include(include_list)
                    known_bricks += 1


            # reconfirue the model
            scene.reconfigure()

            #if ( python_model == 'figure' ):
            #    scene.move_head( 45 )
        else:
            scene = PovRigidSystemModel(self.joints)
            for rigid in self.rigids:
                rigid_model, kbricks, ukbricks = create_rigid_model(self.bricks, rigid)
                scene.add(rigid_model)
                unknown_bricks += ukbricks
                known_bricks += kbricks

            scene.add_include('lg_color2.inc')
            scene.add_include('lg_defs.inc')

        scene.scale = [-1,1,1]
        scene.rotate = [0,180,0]

        print('Brick statistics:')
        print('  {} known / {} unknown bricks'.format(known_bricks, unknown_bricks))

        # put the LEGO macro definition into the scene not in the
        # povfile directly
        scene.add_macro(lego_transform_macro)

        print('Done.')

        return scene



    def generate_povfile(self, povfile, declare_name, python_model):
        f = PovFile(filename = povfile)

        povbricks = self.generate_povlist(python_model)

        f.add_declare(declare_name, povbricks)

        print('Writing to \'%s\' ...' % povfile)
        f.write_povfile()



    def generate_python(self, python_file, python_model):

        povbricks = self.generate_povlist(python_model)

        # now save these objects to a file
        save_python_bricks(python_file, povbricks)
