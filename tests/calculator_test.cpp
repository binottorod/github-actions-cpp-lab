#include <iostream>
#include "calculator.h"

int main()
{
    if (add(2, 3) != 5) {
        std::cerr << "add test failed\n";
        return 1;
    }

    if (subtract(5, 3) != 2) {
        std::cerr << "subtract test failed\n";
        return 1;
    }

    std::cout << "All tests passed\n";
    return 0;
}
