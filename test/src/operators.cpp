#include <gtest/gtest.h>
#include <matrix.hpp>

TEST(matrix, get_shape) {
    matrix::Matrix<int> m(2, 2);
    EXPECT_EQ(m.getShape(), matrix::Shape(2, 2));
}
