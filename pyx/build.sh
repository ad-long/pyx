#!/bin/bash
rm -rf release

python3 setup.py build_ext --inplace

mkdir release
cp libmyso.so release/
mv src/*.h release/
rm src/*.c
rm -rf build