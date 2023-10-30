#include <gtest/gtest.h>

int dummy_main();

TEST(Test, Compilation) {
    int result = dummy_main();
    ASSERT_EQ(result, 0);
}