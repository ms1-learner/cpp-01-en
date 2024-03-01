#include "tests.hpp"
#include <gtest/gtest.h>

#include "elements.hpp"

void testElementAt(const std::vector<int>& n, int index) {
    std::vector<int> numbers = {1, 3, 4, 5};
    auto element = element_at(numbers, index);
    ASSERT_EQ(numbers[index], element);
}

TEST(Test, ElementAtZero) {
    std::vector<int> numbers = {1, 3, 4, 5};
    testElementAt(numbers, 0);
}

TEST(Test, ElementAtSizeMinusOne) {
    std::vector<int> numbers = {1, 3, 4, 5};
    testElementAt(numbers, static_cast<int>(numbers.size() - 1));
}

TEST(Test, ElementAtNegativeOne) {
    std::vector<int> numbers = {1, 3, 4, 5};
    ASSERT_THROW(element_at(numbers, -1), std::out_of_range);
}

TEST(Test, ElementAtSize) {
    std::vector<int> numbers = {1, 3, 4, 5};
    ASSERT_THROW(element_at(numbers, static_cast<int>(numbers.size())), std::out_of_range);
}
