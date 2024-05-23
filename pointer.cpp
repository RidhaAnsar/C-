#include <iostream>

int main() {
    int var = 20;
    int *ptr = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value at ptr (value of var): " << *ptr << std::endl;

    return 0;
}
