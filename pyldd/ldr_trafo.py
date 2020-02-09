"""

pyldd/ldr_trafo.py


written by: Oliver Cordes 2020-02-02
changed by: Oliver Cordes 2020-02-02


"""

import numpy as np

from pkg_resources import resource_string, resource_filename
import gzip
import xml.etree.ElementTree

brick_data_dir = 'brick_data'

ldr_trafo_matrix = None


def create_rotation_matrix(vector, angle):
    #angle = angle * np.pi / 180.
    matrix = np.zeros(9).reshape((3, 3))

    u_x = vector[0]
    u_y = vector[1]
    u_z = vector[2]
    cos_a = np.cos(angle)
    sin_a = np.sin(angle)

    matrix[0, 0] = cos_a + u_x**2 * (1.-cos_a)
    matrix[0, 1] = u_x * u_y * (1.-cos_a) - u_z * sin_a
    matrix[0, 2] = u_x * u_z * (1.-cos_a) + u_y * sin_a
    matrix[1, 0] = u_y * u_x * (1.-cos_a) + u_z * sin_a
    matrix[1, 1] = cos_a + u_y**2 * (1.-cos_a)
    matrix[1, 2] = u_y * u_z * (1.-cos_a) - u_x * sin_a
    matrix[2, 0] = u_z * u_x * (1.-cos_a) - u_y * sin_a
    matrix[2, 1] = u_z * u_y * (1.-cos_a) + u_x * sin_a
    matrix[2, 2] = cos_a + u_z**2 * (1.-cos_a)

    return matrix


def load_ldr_trafo_matrix():
    global ldr_trafo_matrix
    print('Loading \'ldraw.xml\'')
    filename = resource_filename(__name__, '{}/ldraw.xml.gz'.format(brick_data_dir))

    ldr_trafo_matrix = {}

    with gzip.open(filename, 'r') as xmlfile:
        root = xml.etree.ElementTree.parse(xmlfile).getroot()
        trafos = root.findall('Transformation')
        for trafo in trafos:
            ldr_trafo_matrix[trafo.attrib['ldraw']] = {i:trafo.attrib[i] for i in ['tx', 'ty', 'tz', 'ax', 'ay', 'az', 'angle']}

    print('Done.')


def calculate_matrix(trafo):
    matrix = np.array([1., 0., 0., 0., 1., 0., 0., 0., 1., 0., 0., 0.])

    ax = float(trafo['ax'])
    ay = float(trafo['ay'])
    az = float(trafo['az'])
    angle = float(trafo['angle'])


    rot_vector = np.array([ax, ay, az])
    rot_matrix = create_rotation_matrix(rot_vector, angle)
    # invert the matrix
    rot_matrix = np.linalg.inv(rot_matrix)


    # copy all pieces together
    matrix[0:9] = rot_matrix.flatten()
    matrix[9] = float(trafo['tx'])
    matrix[10] = float(trafo['ty'])
    matrix[11] = float(trafo['tz'])

    print(matrix)

    return matrix


def ldr2lddtrafo(brick):
    if ldr_trafo_matrix is None:
        load_ldr_trafo_matrix()

    trafo = calculate_matrix(ldr_trafo_matrix[brick])

    return trafo
