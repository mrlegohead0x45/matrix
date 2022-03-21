#include <gtest/gtest.h>

TEST(BasicSanityTest, BasicSanityTest) {
    ASSERT_EQ(1 + 1, 2) << "Something seriously bad has happened";
}
