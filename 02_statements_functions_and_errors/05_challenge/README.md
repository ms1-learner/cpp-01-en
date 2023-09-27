# Challenge 5

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
