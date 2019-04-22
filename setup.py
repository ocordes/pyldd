from setuptools import setup

from pyldd import __version__, __author__

setup(
    name='pyldd',
    version=__version__,
    author=__author__,
    py_modules=['pylddcmd'],
    packages=['pyldd'],
    install_requires=[
     'numpy',
    ],
    entry_points='''
        [console_scripts]
        pyldd=pylddcmd:main
    ''',
    package_data={
        '': [ 'brick_data/*.dat'],
    },

)
