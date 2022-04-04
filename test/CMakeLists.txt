cmake_minimum_required(VERSION 3.22)
project(matrix-test CXX)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

set(matrix_test_srcs "src/sanity.cpp" "src/operators.cpp")
add_executable(matrix-test ${matrix_test_srcs})

find_package(GTest CONFIG REQUIRED)
target_link_libraries(matrix-test PRIVATE GTest::gtest_main matrix)
target_include_directories(matrix-test SYSTEM PRIVATE "../include")

include(GoogleTest)
gtest_discover_tests(matrix-test)
