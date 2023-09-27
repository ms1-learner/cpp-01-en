# Challenge 4

The following program is supposed to find the maximum of two numbers entered by the user but it's not working correctly. Debug it and fix it.

```cpp
#include <iostream>

int main() {
    int num1;
    int num2;
    int max;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        max == num1;
    } else {
        max == num2;
    }

    std::cout << "Maximum is: " << max << std::endl;

    return 0;
}
```
