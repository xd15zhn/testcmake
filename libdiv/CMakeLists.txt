cmake_minimum_required(VERSION 3.21)
project(libdiv)
set(CMAKE_BUILD_TYPE release)
add_library(${CMAKE_PROJECT_NAME} STATIC div.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC "${PROJECT_SOURCE_DIR}"
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    PUBLIC "${PROJECT_SOURCE_DIR}/../libadd/build/liblibadd.a"
    PUBLIC "${PROJECT_SOURCE_DIR}/../libsub/build/liblibsub.a"
)

