# Able

"Able" is a challenging, physics-based puzzle game where your task is to climb to the top using only the strength of your arms.

Use Q, W, O, and P to control the arms (Q/P to grab/ungrab; W/O to pull yourself up).

Starter tip: Press Q and P together to grab on to both sides of the shaft, then press and hold W and O together to hoist yourself up. Try building up some momentum!

Inspired by games such as [QWOP](http://www.foddy.net/Athletics.html), [Getting over it](https://store.steampowered.com/app/240720/Getting_Over_It_with_Bennett_Foddy/), and [GIRP](http://www.foddy.net/GIRP.html).

Please note that being a #LudwigJam game, the game is fairly short. My PB is currently 5 minutes and 58 seconds, you can see the video here: <https://youtu.be/0iIvGx8S0EE>. A new player could get stuck for a few hours, though!


## Downloads

Please see the game's website at <https://vegard.itch.io/able>.

The game runs on Linux and Windows.


## Building

The build scripts were made to work on my machine, so you will likely have to adjust the build scripts to work on your computer.

Requirements:

* OpenGL
* [SDL 2](http://www.libsdl.org/)
* [SDL\_Image 2.0](https://www.libsdl.org/projects/SDL_image/)
* [SDL\_Mixer 2.0](https://www.libsdl.org/projects/SDL_mixer/)
* [Chipmunk2D 7.0.3](https://chipmunk-physics.net/)

### Windows

The specific packages and external libraries I used for the Windows build were:

* `g++-mingw-w64-x86-64` (`7.3.0-11ubuntu1+20.2build1`)
* <https://chipmunk-physics.net/release/Chipmunk-7.x/Chipmunk-7.0.3.tgz>
* <https://www.libsdl.org/release/SDL2-devel-2.0.16-VC.zip>
* <https://www.libsdl.org/projects/SDL_mixer/release/SDL2_mixer-devel-2.0.4-VC.zip>
* <https://www.libsdl.org/projects/SDL_image/release/SDL2_image-2.0.5-win32-x64.zip>
* <https://software-download.microsoft.com/download/pr/18362.1.190318-1202.19h1_release_WindowsSDK.iso> (Windows SDK)
* <https://archive.mesa3d.org/mesa-19.3.2.tar.xz> (for OpenGL headers only)

Reach out if you need help building for Windows from Linux. I may be able to provide a Dockerfile that does everything.


## Disclaimer

This code was written from scratch in a few days for a game jam. In other words, the code quality is poor and should not be taken as an indication of my general programming skill or sense of code aesthetics :-)


## License

This game code is Copyright (C) 2021 Vegard Nossum <vegard.nossum@gmail.com>.

Note that although the source code is available on GitHub, this game is *NOT* open source. In particular, this means that you may not modify the source code, and you may not redistribute the binary code, assets, or source code without my prior written permission. If you are interested in using the code for something, drop me an email.
