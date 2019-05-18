#!/usr/bin/env python

import os,sys



def read_input_file(filename):
    print(filename)
    with open(filename, 'r') as f:
        lines = f.read().splitlines()

    return lines


def save_output_file(filename, lines):
    with open(filename, 'w') as f:
        beginning_comments = True
        for l in lines:
            f.write(l+'\n')


def convert_lines(lines):
    newlines = []
    beginning_comments = True
    parts = {}
    mapping = {}
    for l in lines:
        l = l.lstrip()
        if l[0] == '#':
            newlines.append(l)
            continue
        if beginning_comments:
            newlines.append('[DEFAULT]')
            beginning_comments = False

        key, val = l.split('=',1)
        if key in ('descr', 'type', 'file', 'width', 'length', 'depth',
                        'parts', 'sx', 'sy', 'sz' ):
            newlines.append(l)
            continue


        if key[:4] == 'part':
            nr = int( key[4:])
            el = parts.get(nr, None)
            if el is None:
                parts[nr] = {'part': val}
            else:
                parts[nr]['part'] = val
        elif key[:4] == 'text':
            nr = int( key[4:])
            el = parts.get(nr, None)
            if el is None:
                parts[nr] = {'texture': val}
            else:
                parts[nr]['texture'] = val

            #f.write(l+'\n')

        if key in ('map', 'map_type', 'map_scale', 'map_rotate', 'map_translate'):
            mapping[key] = val



    for part in parts.keys():
        newlines.append('')
        newlines.append('[PART%i]' % part)
        newlines.append('part=%s' % parts[part]['part'])
        newlines.append('texture=%s' % parts[part]['texture'])

    newlines.append('')
    newlines.append('[MAPPING0]')
    for key in mapping.keys():
        if key == 'map':
            nkey = key
        elif key == 'map_type':
            nkey = 'type'
        elif key == 'map_scale':
            nkey = 'scale'
        elif key == 'map_translate':
            nkey = 'translate'
        elif key == 'map_rotate':
            nkey = 'rotate'
        newlines.append('%s=%s' % (nkey,mapping[key]) )



    return newlines


# main
lines = read_input_file(sys.argv[1])
new_lines = convert_lines(lines)
save_output_file(sys.argv[2], new_lines)
