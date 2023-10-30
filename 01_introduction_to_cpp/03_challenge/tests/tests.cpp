#include "tests.hpp"
#include <gtest/gtest.h>
#include <string_view>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, OutputTrue) {
    std::string output = captureOutput(dummy_main);
    bool pass { output == "12\n3.14159\n1234567890\nk\nkaleidescope\n3.14159\n1\n1\nThe size of a Cesium atom in nanometers is: 0\n" };
    ASSERT_EQ(pass, true);
}