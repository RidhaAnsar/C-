#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";
    int cmp = str1.compare(str2);
    std::cout << "Comparison result: " << cmp << std::endl;
    return 0;
}

