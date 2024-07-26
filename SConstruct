import os

env = Environment()

source_files = ['src/helloworld.cpp']
include_path = os.path.join('include')
lib_include_path = os.path.join('lib', 'onnxruntime-1.18.1', 'include')
lib_path = os.path.join('lib', 'onnxruntime-1.18.1', 'lib', 'linux_x64')

env.Append(CPPPATH=[include_path, lib_include_path])
libs = ['onnxruntime']

env.Append(LIBPATH=[lib_path])
env.Append(RPATH=[lib_path])

env.Program(target='bin/hello_world', source=source_files, LIBS=libs)