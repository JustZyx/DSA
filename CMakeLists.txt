cmake_minimum_required(VERSION 3.8)
project(DSA)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp test/test.cpp test/test.h Sort/Sort.cpp Sort/Sort.h)
add_executable(DSA ${SOURCE_FILES} test/test.cpp test/test.h Sort/Sort.cpp Sort/Sort.h)