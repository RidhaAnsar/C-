#include <iostream>
#include <cmath>

int main() {
    double dividend = 10.5;
    double divisor = 3.0;

    double remainder = fmod(dividend, divisor);
    std::cout << "Remainder of " << dividend << " divided by " << divisor << " is " << remainder << std::endl;

    return 0;
}

