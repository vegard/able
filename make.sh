#! /bin/bash

set -e
set -u
set -x

python svg2level.py  > level.c

g++-9 -Wall -g -O2 $(pkg-config --cflags sdl2 SDL2_image SDL2_mixer) -IChipmunk-7.0.3/include/chipmunk -o able main.cc $(pkg-config --libs sdl2 SDL2_image SDL2_mixer) -lGL -lGLU Chipmunk-7.0.3/src/libchipmunk.a
