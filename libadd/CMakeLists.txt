cmake_minimum_required(VERSION 3.21)
project(libadd)
set(CMAKE_BUILD_TYPE release)
add_library(${CMAKE_PROJECT_NAME} STATIC add.cpp)
