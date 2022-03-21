cmake_minimum_required(VERSION 3.22)

option(BUILD_TESTS "Whether to build the tests" OFF)
if(BUILD_TESTS)
    list(APPEND VCPKG_MANIFEST_FEATURES "tests")
    include("../vcpkg/scripts/buildsystems/vcpkg.cmake")
    add_subdirectory(test)
endif()

project(matrix CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

set(matrix_srcs "src/matrix.cpp" "src/shape.cpp")
set(matrix_headers "include/matrix.hpp" "include/shape.hpp")
add_library(matrix ${matrix_srcs})

target_include_directories(matrix PRIVATE include)

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
)
install(FILES ${matrix_headers} DESTINATION include/matrix)
install(EXPORT matrix DESTINATION matrix)
