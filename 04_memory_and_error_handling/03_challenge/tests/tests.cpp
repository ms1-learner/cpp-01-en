#include "tests.hpp"

#include <gtest/gtest.h>

#include "elements.hpp"


TEST(Test, DoubleElements) {
    std::vector<int> numbers = {1, 2, 4, 6, 7};
    auto doubled = double_elements(numbers);
    for (int i = 0; i < doubled.size(); ++i) {
        ASSERT_EQ(doubled[i], numbers[i] * 2);
    }
}
