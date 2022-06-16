set(LIBADD_DIR D:/cppcode/testcmake/libadd)
set(LIBSUB_DIR D:/cppcode/testcmake/libsub)
set(LIBDIV_DIR D:/cppcode/testcmake/libdiv)

cmake_minimum_required(VERSION 3.21)
project(testcmake)
set(CMAKE_BUILD_TYPE release)
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC "${LIBDIV_DIR}"
    PUBLIC "${LIBADD_DIR}"
    PUBLIC "${LIBSUB_DIR}/inc"
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    PUBLIC "${LIBDIV_DIR}/build/liblibdiv.a"
    PUBLIC "${LIBADD_DIR}/build/liblibadd.a"
    PUBLIC "${LIBSUB_DIR}/build/liblibsub.a"
)

