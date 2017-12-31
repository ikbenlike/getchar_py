from distutils.core import setup, Extension

setup(name='getchar', version='1.0', ext_modules=[Extension('getchar', ['getcharmodule.c'])])