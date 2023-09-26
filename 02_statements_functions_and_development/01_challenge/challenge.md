# Challenge 1

Write a program that asks for a number from the user and prints whether it is positive, negative, or zero.

---

```cpp
#include <iostream>

int main() {
    int number {};
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
```
