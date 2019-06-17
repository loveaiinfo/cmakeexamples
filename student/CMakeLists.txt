cmake_minimum_required(VERSION 3.13.4)
project(directory_test)

include_directories(include)

#set(SOURCES src/Student.cpp src/main/cpp)

file(GLOB SOURCES src/*.cpp)

add_executable(student ${SOURCES})
