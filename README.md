# what's it for
compile pyx files as so lib, and called by py file or cpp file

## show so funciotns
``` shell
nm -D myso.cpython-310-x86_64-linux-gnu.so
```

## build so
``` shell
cd pyx
./build
```

## cpp call so
``` shell
cd cpp
mkdir build && cd build
cmake ..
make
./cpp
```

## py call so
``` shell
cd py
python3 call_so.py
```