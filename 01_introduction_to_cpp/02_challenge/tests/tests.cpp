#include "tests.hpp"
#include <gtest/gtest.h>
#include <string_view>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, OutputTrue) {
    std::string_view output = captureOutput(dummy_main);
    bool pass { output.starts_with("1\n1\n1") };
    ASSERT_EQ(pass, true);
}