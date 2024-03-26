#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    size_t found = str.find("World");
    std::cout << "Position of 'World': " << found << std::endl;
    return 0;
}

