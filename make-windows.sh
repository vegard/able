#! /bin/bash

set -e
set -u
set -x

python svg2level.py  > level.c

x86_64-w64-mingw32-g++-win32 -std=c++17 -Wall -static-libgcc -static-libstdc++ -g -D_GNU_SOURCE -I$windows/install/include/ -I"$windows/Windows SDK Desktop Libs x64-x86_en-us/Program Files/Windows Kits/10/Include/10.0.18362.0/um/" -I$windows/mesa-19.3.2/include/ -ISDL2-devel-2.0.16-mingw/SDL2-2.0.16/x86_64-w64-mingw32/include/SDL2/ -ISDL2_mixer-devel-2.0.4-VC/SDL2_mixer-2.0.4/include/ -ISDL2_image-2.0.5/ -IChipmunk-7.0.3/include -mwindows -o able.exe main.cc Chipmunk-7.0.3/src/*.c -L$windows/Windows\ SDK\ Desktop\ Libs\ x64-x86_en-us/Program\ Files/Windows\ Kits/10/Lib/10.0.18362.0/um/x64/ -L$windows/install/lib/ -LSDL2-devel-2.0.16-VC/SDL2-2.0.16/lib/x64/ -LSDL2_mixer-devel-2.0.4-VC/SDL2_mixer-2.0.4/lib/x64/ -LSDL2_image-2.0.5-win32-x64 -lSDL2main -lOpenGL32 -lglu32 -luser32 -lSDL2 -lSDL2_mixer -lSDL2_image
