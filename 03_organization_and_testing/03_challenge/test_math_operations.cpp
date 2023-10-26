#include <gtest/gtest.h>
#include "math_operations.h"

TEST(MathOperations, Add) {
    ASSERT_DOUBLE_EQ(MathOps::add(5, 3), 8);
}

TEST(MathOperations, Subtract) {
    ASSERT_DOUBLE_EQ(MathOps::subtract(5, 3), 2);
}

TEST(MathOperations, Multiply) {
    ASSERT_DOUBLE_EQ(MathOps::multiply(5, 3), 15);
}

TEST(MathOperations, Divide) {
    ASSERT_DOUBLE_EQ(MathOps::divide(6, 3), 2);
}

TEST(MathOperations, DivideByZero) {
    ASSERT_THROW(MathOps::divide(6, 0), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
