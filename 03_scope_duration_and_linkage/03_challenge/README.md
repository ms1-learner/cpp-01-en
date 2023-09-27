# Challenge 3

Create a C++ program that includes a header file `math_operations.h` which contains function declarations for basic mathematical operations (`addition`, `subtraction`, `multiplication`, and `division`) in a namespace `MathOps`. Implement these functions in a separate file `math_operations.cpp`. Use these functions in a main program file `main.cpp`. The program should prompt the user for two numbers and the operation to be performed, then display the result.

### Example 1
input:
```
Enter a calculation: 4 / 5
```
output:
```
Result: 0.8
```

### Example 2
input:
```
Enter a calculation: 24 - 6
```
output:
```
Result: 18
```

---

**math_operations.h:**
```cpp
namespace MathOps {
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(int a, int b);
}
```

**math_operations.cpp:**
```cpp
#include "math_operations.h"

namespace MathOps {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        return double(a) / double(b);
    }
}
```

**main.cpp:**
```cpp
#include <iostream>
#include "math_operations.h"

int main() {
    int a {};
    int b {};
    char operation {};

    for (;;) {
        std::cout << "Enter a calculation: ";
        std::cin >> a >> operation >> b;

        if (operation == '+') {
            std::cout << "Result: " << MathOps::add(a, b) << std::endl;
        } else if (operation == '-') {
            std::cout << "Result: " << MathOps::subtract(a, b) << std::endl;
        } else if (operation == '*') {
            std::cout << "Result: " << MathOps::multiply(a, b) << std::endl;
        } else if (operation == '/') {
            std::cout << "Result: " << MathOps::divide(a, b) << std::endl;
        } else {
            std::cout << "Invalid operation." << std::endl;
        }
    }

    return 0;
}
```