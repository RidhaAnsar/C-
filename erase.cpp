#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    str.erase(5, 6);
    std::cout << "Erased string: " << str << std::endl;
    return 0;
}

