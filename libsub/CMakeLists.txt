cmake_minimum_required(VERSION 3.21)
project(libsub)
set(CMAKE_BUILD_TYPE release)
add_library(${CMAKE_PROJECT_NAME}
    STATIC "${PROJECT_SOURCE_DIR}/src/sub.cpp"
)
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC "${PROJECT_SOURCE_DIR}/inc"
)
