from ctypes import *
import os

path = "../pyx/release/libmyso.so"
path = os.path.abspath(path)
print(path)
libc = cdll.LoadLibrary(path)

print(libc.add(3,5))