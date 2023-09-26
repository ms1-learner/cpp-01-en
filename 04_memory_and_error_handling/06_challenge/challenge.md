# Challenge 6

Create a function `element_at` that takes a `std::vector<int>` and an integer index as its arguments. The function should return the element of the vector at the specified index. If the index is out of bounds, throw a `std::out_of_range` exception with a suitable error message. In the main function, call `element_at` with both valid and invalid indices, handling the exception appropriately.

```cpp
#include <iostream>
#include <stdexcept>
#include <vector>

// TODO

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // TODO
}
```

---

```cpp
int element_at(const std::vector<int> &numbers, int index) {
    if (index < 0 || index >= static_cast<int>(numbers.size())) {
        throw std::out_of_range("Index is out of bounds");
    }
    return numbers[index];
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    try {
        int valid_index = 2;
        std::cout << "Element at index " << valid_index << " is: " << element_at(numbers, valid_index) << std::endl;

        int invalid_index = 10;
        std::cout << "Element at index " << invalid_index << " is: " << element_at(numbers, invalid_index) << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
```
