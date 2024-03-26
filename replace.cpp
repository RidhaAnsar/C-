#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    str.replace(6, 5, "Universe");
    std::cout << "Replaced string: " << str << std::endl;
    return 0;
}

