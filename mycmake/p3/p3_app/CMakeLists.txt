cmake_minimum_required(VERSION 2.6)
 
project(Coverage)
 
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")
 
include(CTest)

add_executable(Coverage coverage.cpp)
target_link_libraries(Coverage gcov)
 
add_test(NAME Coverage COMMAND Coverage)

