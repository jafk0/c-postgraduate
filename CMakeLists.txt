cmake_minimum_required(VERSION 3.19)
project(c_postgraduate)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
include_directories(.)

add_executable(Hello Hello.cpp)

add_executable(test test.cpp)

add_executable(2.18 2/2.18.cpp)
add_executable(2.28 2/2.28.cpp)
add_executable(2.29 2/2.29.cpp)
add_executable(2.30 2/2.30.cpp)
add_executable(2.31 2/2.31.cpp)
add_executable(2.33 2/2.33.cpp)
add_executable(2.34 2/2.34.cpp)
add_executable(2.35 2/2.35.cpp)