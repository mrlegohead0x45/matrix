project(matrix CXX)

add_library(matrix matrix.cpp)

target_include_directories(matrix PUBLIC include)

install(
    TARGETS matrix
    EXPORT matrix
    LIBRARY DESTINATION bin
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include
)
