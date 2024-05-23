#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial of a negative number doesn't exist." << std::endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " = " << factorial << std::endl;
    }

    return 0;
}
