cmake_minimum_required(VERSION 3.13.4)
project(static_lib_test)

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

#set(SOURCES src/Student.cpp src/main/cpp)

file(GLOB SOURCES src/*.cpp)

#add_executable(student ${SOURCES})
add_library(student STATIC ${SOURCES})
