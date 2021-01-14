cmake_minimum_required(VERSION 3.17)
project(complex)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES lib.cpp)
add_executable(complex main.cpp ${SOURCE_FILES})