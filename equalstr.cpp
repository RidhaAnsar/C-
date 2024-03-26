#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3 = "Hello";

    // Check if str1 and str2 are equal
    if (str1 == str2) {
        std::cout << "str1 and str2 are equal" << std::endl;
    } else {
        std::cout << "str1 and str2 are not equal" << std::endl;
    }

    // Check if str1 and str3 are equal
    if (str1 == str3) {
        std::cout << "str1 and str3 are equal" << std::endl;
    } else {
        std::cout << "str1 and str3 are not equal" << std::endl;
    }

    return 0;
}

