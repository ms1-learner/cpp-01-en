#include <iostream>

int dummy_main() {
    // use relational operators, such as == or < to make these expressions `true`
    bool expr1 {6 < 7};
    bool expr2 {9 < 10};
    bool expr3 {500 == 500};

    // use logical operators to make your own expressions
    // use each logical operator at least once
    bool expr4 {3 >= 4};
    bool expr5 {1 != 2};
    bool expr6 {4 <= 5};

    // Do not change these lines
    // These lines will check the how each boolean expression evaluates
    std::cout << expr1 << std::endl;
    std::cout << expr2 << std::endl;
    std::cout << expr3 << std::endl;
    std::cout << expr4 << std::endl;
    std::cout << expr5 << std::endl;
    std::cout << expr6 << std::endl;
    return 0;
}
