# Challenge 4

Create a function `safe_sqrt` that takes a `double` as its argument and returns the square root of the number. If the argument is negative, the function should throw a `std::domain_error` with the message "Cannot compute the square root of a negative number". In the main function, call `safe_sqrt` with both a positive and a negative number, handling the exception appropriately.

```cpp
#include <cmath>
#include <iostream>
#include <stdexcept>

// TODO

int main() {
    double positive_number { 9.0 };
    double negative_number { -4.0 };

    // TODO
}
```

---

```cpp
#include <cmath>
#include <iostream>
#include <stdexcept>

double safe_sqrt(double x) {
    if (x < 0) {
        throw std::domain_error("Cannot compute the square root of a negative number");
    }
    return std::sqrt(x);
}

int main() {
    double positive_number { 9.0 };
    double negative_number { -4.0 };

    try {
        std::cout << "Sqrt of " << positive_number << " is: " << safe_sqrt(positive_number) << std::endl;

        std::cout << "Sqrt of " << negative_number << " is: " << safe_sqrt(negative_number) << std::endl;
    } catch (const std::domain_error &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
```
