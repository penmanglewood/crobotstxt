# crobotstxt

A C wrapper for [google/robotstxt](https://github.com/google/robotstxt).

## Building with CMake

```
mkdir build
cd build
cmake ..
make
```

This makes `libcrobots.a`.

## Linking and using the library

If librobots is not installed in a system library path, make sure to append
the location to `LD_LIBRARY_PATH`.

```
export LD_LIBRARY_PATH=path/to/librobots:$LD_LIBRARY_PATH
```

To use libcrobots outside of CMake, link to libcrobots and librobots.

```
# Build an executable linking libcrobots and librobots
gcc -Ipath/containing/crobots.h main.c \
    -Lpath/to/libcrobots -lcrobots \
    -Lpath/to/librobots -lrobots \
    -lstdc++
```
