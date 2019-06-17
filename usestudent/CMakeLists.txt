cmake_minimum_required(VERSION 3.13.4)

project(usestudent)

set(PROJECT_LINK_LIBS libstudent.dylib)
link_directories(~/projects/cmakeexamples/student_lib_share/build)

include_directories(~/projects/cmakeexamples/student_lib_share/include)

add_executable(usestudent usestudent.cpp)

target_link_libraries(usestudent ${PROJECT_LINK_LIBS})
