cmake_minimum_required(VERSION 3.22)
project(matrix CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_library(matrix src/matrix.cpp)

target_include_directories(matrix PUBLIC include)

install(
    TARGETS matrix
    EXPORT matrix
    LIBRARY DESTINATION bin
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)
