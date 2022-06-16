set(LIBADD_DIR D:/cppcode/testcmake/libadd)
set(LIBSUB_DIR D:/cppcode/testcmake/libsub)

cmake_minimum_required(VERSION 3.21)
project(libdiv)
set(CMAKE_BUILD_TYPE release)
add_library(${CMAKE_PROJECT_NAME} STATIC div.cpp)
# add_executable(${CMAKE_PROJECT_NAME} main.cpp div.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC "${PROJECT_SOURCE_DIR}"
    PUBLIC "${LIBADD_DIR}"
    PUBLIC "${LIBSUB_DIR}/inc"
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    PUBLIC libadd
    PUBLIC libsub
)
