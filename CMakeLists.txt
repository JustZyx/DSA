cmake_minimum_required(VERSION 3.8)
project(DSA)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sort/Sort.cpp Sort/Sort.h Test/Test.cpp Test/Test.h)
add_executable(DSA ${SOURCE_FILES} Sort/Sort.cpp Sort/Sort.h Test/Test.cpp Test/Test.h)