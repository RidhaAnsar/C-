#include <iostream>
#include <limits>

int main() {
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Number of digits in int: " << std::numeric_limits<int>::digits10 << std::endl;

    return 0;
}

