# MiniBox
MiniBox is an alternative for Busybox and Toybox.
MiniBox yet does not support all the featues that
are supported by Busybox and Toybox because this
is still under development.

## How to Compile
__Note: It is assumed that you are using linux system which has gcc, g++,
cmake, ccmake and make packages installed. It is also assumed that you
already have previous knowledge of using terminal and basic linux commands.__

1. Download the source code from github <br>
`git clone https://github.com/ayuzzh/MiniBox`.

2. Change the directory into root of the repository <br>
`cd MiniBox`.

3. Configure the project using cmake <br>
`cmake -S . -B build`.

4. Change the directory to build directory <br> `cd build`.

5. Now its finale step of compiling MiniBox `make -j$(nproc --ignore=1)`. 
Now the executable is found in build. Execute it by typing `./minibox`.
