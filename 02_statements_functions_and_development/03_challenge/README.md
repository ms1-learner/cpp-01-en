# Challenge 3

The following program calculates the average of three numbers entered by the user. Test this program with different inputs. Is the program functioning correctly or not? If not, fix the program so that it gives the output you expect.

```cpp
#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    float average;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    std::cout << "Average is: " << average << std::endl;

    return 0;
}
```

---

The program will work correctly for integers but will give incorrect results for decimal numbers. This is because `num1`, `num2`, and `num3` are all `int`s. We need to change these variables to `float`s.

```cpp
#include <iostream>

int main() {
    float num1;
    float num2;
    float num3;
    float average;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3;

    std::cout << "Average is: " << average << std::endl;

    return 0;
}
```
