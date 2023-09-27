# Challenge 3

Create a function `double_elements` that takes a `std::vector<int>` as its argument and returns a new `std::vector<int>` with each element doubled. Then, use a range-based for loop to print the elements of both the original and the new vector.

```cpp
#include <iostream>
#include <vector>

// TODO

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // TODO
}
```

---

```cpp
#include <iostream>
#include <vector>

std::vector<int> double_elements(const std::vector<int> &input) {
    std::vector<int> output;
    output.reserve(input.size());

    for (int element : input) {
        output.push_back(element * 2);
    }

    return output;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> doubled_numbers = double_elements(numbers);

    std::cout << "Original vector: ";
    for (int element : numbers) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    std::cout << "Doubled vector: ";
    for (int element : doubled_numbers) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;
}
```
