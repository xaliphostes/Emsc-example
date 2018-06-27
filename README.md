# Definition

Show how to use emscripten with cmake for a simple or a big project.

MyLib is a static library which will generate a .lib (under Windows of course).
Main will generate a .exe and is linked (statically) to MyLib.
`nmake install` will install the exe and the dll in the `bin` directory, and the lib in the `lib` directory.

# Generation and installation

1. Generate the build directory

`mkdir build`

2. Go inside the `build` directory

3. Generate the makefiles

`cmake -DCMAKE_TOOLCHAIN_FILE="%EMSCRIPTEN%/cmake/Modules/Platform/emscripten.cmake" -G "NMake Makefiles" ..`

4. Compile

`nmake`
