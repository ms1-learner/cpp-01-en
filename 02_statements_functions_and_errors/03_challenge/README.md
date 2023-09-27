# Challenge 3

Write a C++ function `power` which takes two arguments - `base` and `exponent`. `exponent` has a default value of 2. `power` returns the result of `base` raised to the power `exponent`. Call this function with a base of 3 and exponent of 4.

---

```cpp
#include<iostream>

int power(int base, int exponent = 2) {
  int result = 1;
  for(int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int main() {
  std::cout << "3 to the power 4 is: " << power(3, 4) << std::endl;
  return 0;
}
```
