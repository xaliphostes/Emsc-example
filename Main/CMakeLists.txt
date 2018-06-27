cmake_minimum_required(VERSION 3.5)

project(mymain)

############################################################
# Create an executable
############################################################

add_executable(mymain src/main.cxx)
target_link_libraries(mymain mylib)

find_library(MYLIB_LIBRARY mylib.lib)

include_directories(../Lib/include)

install (TARGETS mymain DESTINATION ${PROJECT_SOURCE_DIR}/../bin)
