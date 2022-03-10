cmake_minimum_required(VERSION 3.22)
project(matrix CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(matrix_srcs "src/matrix.cpp" "src/shape.cpp")
add_library(matrix ${matrix_srcs})

target_include_directories(matrix PUBLIC include)

target_compile_options(matrix PRIVATE 
    $<$<CXX_COMPILER_ID:Clang,GNU,AppleClang>:
        -Wall -Werror -Wextra>
    $<$<CXX_COMPILER_ID:MSVC>:
        /WX /W4>
)

install(
    TARGETS matrix
    EXPORT matrix
    LIBRARY DESTINATION bin
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)
