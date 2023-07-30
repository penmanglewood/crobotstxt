# crobotstxt

A C wrapper for [google/robotstxt](github.com/google/robotstxt).

## Building the library

```
mkdir build
cd build
cmake ..
make
```

This makes `libcrobots.a`.

## Linking and using the library

If you create a main.c to test libcrobots, it will try to link against the
shared librobots in external/robotstxt. The shared one contains its abseil
dependencies, where the static one doesn't seem to.

```
# Build an executable linking libcrobots and librobots
gcc -I.. main.c -L. -lcrobots -Lexternal/robotstxt -lrobots -lstdc++
```

This will compile, but it will not run.

```
export LD_LIBRARY_PATH=external/robotstxt:$LD_LIBRARY_PATH
```

Export the path to the shared library and it will run.
