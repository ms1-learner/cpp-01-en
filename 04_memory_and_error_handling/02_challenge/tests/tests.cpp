#include "tests.hpp"
#include <gtest/gtest.h>

#include "swap.hpp"

TEST(Test, swap_int) {
    int a = 3;
    int b = 4;
    int old_a { a };
    int old_b { b };
    int* old_a_ptr { &a };
    int* old_b_ptr { &b };
    swap_int(&a, &b);
    ASSERT_EQ(old_a, b);
    ASSERT_EQ(old_b, a);
    ASSERT_EQ(old_a_ptr, &a);
    ASSERT_EQ(old_b_ptr, &b);
}
