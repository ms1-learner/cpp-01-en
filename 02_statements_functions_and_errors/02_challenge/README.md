# Challenge 2

Create a `main.cpp` file in this directory, and copy this code into it. Complete the function declaration and definition to create a recursive function factorial which takes an integer `n` and returns the factorial of `n`.

```cpp
______ factorial(int n);

int main() {
  std::cout << "Factorial of 4 is " << factorial(4) << std::endl;
  return 0;
}

______ factorial(int n) {
  if (n == 0) {
    ______ 1;
  } else {
    ______ n * factorial(n - 1);
  }
}
```
