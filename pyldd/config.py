"""
pyldd/config.py

written by: Oliver Cordes 2020-04-04
changed by: Oliver Cordes 2020-04-05

"""

import os

# load extra local variables from .env in the local directory
from dotenv import load_dotenv
load_dotenv()



class ConfigObj(object):
    random_seed = os.environ.get('PYLDD_SEED') or 123456789
    #param1 = 1
    #param2 = 'string'
    #param3 = ['hugo', 'egon']
    brick_random_position = 0.01 # units
    brick_random_rotation = 0.01 # degrees
    brick_random_total = None



def _obj2dict(obj):
    # select all class attributes which are not callable and
    # don't start with a __ which indicates an internal variable
    vars = [attr for attr in dir(obj) if (not attr.startswith('__')) and (not callable(getattr(obj, attr)))]
    # copy all values from the vars list into a dictonary
    return  {attr:getattr(obj,attr) for attr in vars}


"""
merge_config

add a new config object to the ldrconfig dictionary
"""
def merge_config(obj):
    if isinstance(obj, object):
        newd = _obj2dict(obj)
        ldrconfig.update(newd)
    else:
        print('WARNING: merge_config is called with an unknown object type!')


# anybody how includes this module will create this dictionary

# main code
ldrconfig = _obj2dict(ConfigObj)
