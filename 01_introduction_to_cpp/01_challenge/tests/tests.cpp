#include <gtest/gtest.h>

int dummy_main();

TEST(Test, Compilation) {
    bool result { !dummy_main() };
    ASSERT_EQ(result, true);
}
