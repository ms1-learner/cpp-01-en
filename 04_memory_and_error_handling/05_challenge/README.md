# Challenge 5

The following code has a bug. Fix the bug.

```cpp
#include <iostream>
#include <stdexcept>
#include <vector>

const int* find_maximum(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Empty vector has no maximum value");
    }

    const int* max_ptr = &numbers[0];
    for (int number : numbers) {
        if (number > *max_ptr) {
            max_ptr = &number;
        }
    }

    return max_ptr;
}

int main() {
    std::vector<int> non_empty_vector = {1, 5, 3, 8, 2};
    std::vector<int> empty_vector;

    try {
        auto max_ptr = find_maximum(non_empty_vector);
        std::cout << "Maximum value in the non-empty vector is: " << *max_ptr << std::endl;

        max_ptr = find_maximum(empty_vector);
        std::cout << "Maximum value in the empty vector is: " << *max_ptr << std::endl;
    } catch (const std::runtime_error &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
```
