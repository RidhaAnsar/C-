#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    const char* cstr = str.c_str();
    std::cout << "C-string: " << cstr << std::endl;
    return 0;
}

