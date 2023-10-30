#include "tests.hpp"
#include <gtest/gtest.h>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, OutputNumber) {
    auto output = captureOutput(dummy_main);

    bool pass { false };
    try {
        std::stoi(output);
        pass = true;
    } catch (...) {
        pass = false;
    }

    ASSERT_EQ(pass, true);
}