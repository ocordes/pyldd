from setuptools import setup


__version__ = '0.0.1'
__author__ = 'Oliver Cordes'

setup(
    name='pyldd',
    version=__version__,
    author=__author__,
    py_modules=['pyldd'],
    packages=['pyldd'],
    install_requires=[
     'numpy',
    ],
    entry_points='''
        [console_scripts]
        pyldd=pylddcmd:main
    ''',
)
