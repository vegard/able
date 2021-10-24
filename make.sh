#! /bin/bash

set -e
set -u
set -x

python svg2level.py  > level.c

g++-9 -Wall -g -O2 $(pkg-config --cflags sdl2 SDL2_image) -IChipmunk-7.0.3/include/chipmunk -LChipmunk-6.1.3/src -o able main.cc $(pkg-config --libs sdl2 SDL2_image) -lSDL_image -lGL -lGLU Chipmunk-7.0.3/src/libchipmunk.a
