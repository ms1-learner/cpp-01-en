#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

extern int x;
extern int* p;

TEST(Test, Address) {
    ASSERT_EQ(p, &x);
}
