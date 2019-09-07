#
# LDD .g object to .pov
#
# written by: Oliver Cordes 2019-08-25
# changed by: Oliver Cordes 2019-09-07
#

import os, sys
import numpy as np

from pypovlib.pypovobjects import *


prefix = '/Users/ocordes/Library/Application Support/LEGO Company/LEGO Digital Designer/db.user/Primitives/Lod0/'


TEXTURE_COORDINATES_INCLUDED = 0x1

"""

Documents:

 - https://github.com/Terrev/G-to-OBJ/blob/master/Assets/Manager.cs

private static VBOContents loadSingleGeometryFile(byte[] streamContents) throws IOException {
		ByteBuffer buffer = ByteBuffer.wrap(streamContents);
		buffer.order(ByteOrder.LITTLE_ENDIAN);

		//header
		buffer.getInt();
		int vertexCount = buffer.getInt();
		int indexCount = buffer.getInt();
		int options = buffer.getInt();
		boolean texturesEnabled = (TEXTURE_COORDINATES_INCLUDED & options) == TEXTURE_COORDINATES_INCLUDED;

		int[] indices = new int[indexCount];
		float[] vertices = new float[3*vertexCount];
		float[] texCoords = new float[2*vertexCount];
		float[] normals = new float[3*vertexCount];

		FloatBuffer floatBuffer = buffer.asFloatBuffer();
		IntBuffer intBuffer = buffer.asIntBuffer();

		floatBuffer.get(vertices);
		floatBuffer.get(normals);
		if(texturesEnabled) {
			floatBuffer.get(texCoords);
		}

		int currentPosition = intBuffer.position();
		int skipDistance = (texturesEnabled ? 8 : 6) * vertexCount;
		intBuffer.position(currentPosition + skipDistance);

		intBuffer.get(indices);

		if(texturesEnabled) {
			return new VBOContents(vertices, normals, texCoords, indices);
		} else {
			return new VBOContents(vertices, normals, indices);
		}
	}

  java: int   4 bytes
        float 4 bytes
"""

def read_g_file(filename):
    print('Processing \'%s\' ...' % filename )
    # with open(filename, 'rb') as f:
    #     b = f.read(4)
    #     print(b)
    #
    #     vertexCount = int.from_bytes(f.read(4), byteorder='little')
    #     indexCount = int.from_bytes(f.read(4), byteorder='little')
    #     options = int.from_bytes(f.read(4), byteorder='little')
    #
    #     print(vertexCount)
    #     print(indexCount)
    #     print(options)

    with open(filename, 'r') as f:
        b = np.fromfile(f, dtype=np.uint32, count=1)
        #print(b)

        vertexCount = np.fromfile(f, dtype=np.uint32, count=1)[0]
        indexCount = np.fromfile(f, dtype=np.uint32, count=1)[0]
        options = np.fromfile(f, dtype=np.uint32, count=1)[0]

        print('vertexCount =', vertexCount)
        print('indexCount =', indexCount)
        print('options = ', options)


        vertices = np.fromfile(f, dtype=np.float32, count=3*vertexCount).reshape(vertexCount,3)
        normals = np.fromfile(f, dtype=np.float32, count=3*vertexCount).reshape(vertexCount,3)


        has_textures = bool(options & TEXTURE_COORDINATES_INCLUDED)

        print('has_texture: ', has_textures)


        if has_textures:
            texCoords = np.fromfile(f, dtype=np.float32, count=2*vertexCount)
        else:
            texCoords = None

        facecount = indexCount // 3
        indices = np.fromfile(f, dtype=np.uint32, count=indexCount).reshape(facecount,3)

        print('Done.')

        return vertices, normals, texCoords, indices


def write_povmesh(povfilename,
                  macroname,
                  mesh_grids):

    f = PovFile(filename=povfilename)

    u = PovCSGUnion()

    for grid in mesh_grids:
        vertices = grid[0]
        normals = grid[1]
        texCoords = grid[2]
        indices = grid[3]

        mesh = PovMesh2(vertex_vectors=vertices,
                        normal_vectors=normals,
                        #uv_vectors=texCoords,
                        face_indices=indices,
                        normal_indices=indices,
                        comment=None)

        if len(mesh_grids) == 1:
            u = mesh
        else:
            u.add(mesh)

    # make somehow compatible to lg_pov definitions
    u.rotate = [0,-90,0]
    u.rotate = [90,0,0]

    f.add_declare(macroname, u)

    f.write_povfile()



def convert_brick(nr):
    filename = os.path.join(prefix, '%s.g' % nr)

    if os.access(filename, os.R_OK) == False:
        print('Cannot open file \'%s\'! Program aborted!' % filename)
        sys.exit(0)

    macroname = 'lg_%s' % nr

    mesh_grids = []

    results = read_g_file(filename)
    mesh_grids.append(results)

    count = 1
    while True:
        nfilename = '%s%i' % (filename, count)
        if os.access(nfilename, os.R_OK):
            results = read_g_file(nfilename)
            mesh_grids.append(results)
            count += 1
        else:
            break


    povfilename = macroname + '.inc'

    write_povmesh(povfilename, macroname, mesh_grids)

# main
filename = '/Users/ocordes/Library/Application Support/LEGO Company/LEGO Digital Designer/db.user/Primitives/Lod0/58827.g'
filename = '/Users/ocordes/Library/Application Support/LEGO Company/LEGO Digital Designer/db.user/Primitives/Lod0/3001.g'


#convert_brick('33176')

if len(sys.argv) > 1:
    convert_brick(sys.argv[1])
else:
    print('Too few arguments for program. Need a brick number...!')
