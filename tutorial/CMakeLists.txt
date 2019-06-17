cmake_minimum_required (VERSION 3.13.4)
project (Tutorial)

# The version number.
set (TUTORIAL_VERSION_MAJOR 1)
set (TUTORIAL_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

add_executable(tutorial tutorial.cxx)
