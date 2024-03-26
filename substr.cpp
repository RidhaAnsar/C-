#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    std::string substr = str.substr(6, 5);
    std::cout << "Substring: " << substr << std::endl;
    return 0;
}

