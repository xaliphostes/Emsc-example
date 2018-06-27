cmake_minimum_required (VERSION 3.5)

project(subprojects)

set(USE_EMSC 1)

IF( ${USE_EMSC} )
  add_definitions(-DUSE_EMSC)
ENDIF()

# Add sub directories
add_subdirectory(MyLib)
add_subdirectory(Main)
