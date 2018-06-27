mkdir build_emsc
cd build_emsc
cmake -DCMAKE_TOOLCHAIN_FILE="%EMSCRIPTEN%/cmake/Modules/Platform/emscripten.cmake" -G "NMake Makefiles" ..
nmake
cd ..
