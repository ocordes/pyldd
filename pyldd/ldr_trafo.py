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

    matrix[9] = float(trafo['tx'])
    matrix[10] = float(trafo['ty'])
    matrix[11] = float(trafo['tz'])
    
    return matrix


def ldr2lddtrafo(brick):
    if ldr_trafo_matrix is None:
        load_ldr_trafo_matrix()

    trafo = calculate_matrix(ldr_trafo_matrix[brick])

    return trafo
