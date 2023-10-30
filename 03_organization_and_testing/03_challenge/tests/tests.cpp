#include "tests.hpp"
#include "math_operations.h"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    std::string input { "4 / 5" };
    std::string output;
    bool pass { !redirectInputAndCaptureOutput(input, output, dummy_main) };
    ASSERT_EQ(pass, true);
}

TEST(MathOperations, Add) {
    ASSERT_DOUBLE_EQ(MathOps::addition(5, 3), 8);
}

TEST(MathOperations, Subtract) {
    ASSERT_DOUBLE_EQ(MathOps::subtraction(5, 3), 2);
}

TEST(MathOperations, Multiply) {
    ASSERT_DOUBLE_EQ(MathOps::multiplication(5, 3), 15);
}

TEST(MathOperations, Divide) {
    ASSERT_DOUBLE_EQ(MathOps::division(6, 3), 2);
}

TEST(MathOperations, DivideByZero) {
    ASSERT_THROW(MathOps::division(6, 0), std::runtime_error);
}

TEST(Test, InputOutput) {
    std::string input { "4 / 5" };
    std::string output;
    redirectInputAndCaptureOutput(input, output, dummy_main);
    bool pass { output == "Enter a calculation: Result: 0.8\n" };
    ASSERT_EQ(pass, true);
}