#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    bool isEmpty = str.empty();
    std::cout << "Is the string empty? " << (isEmpty ? "Yes" : "No") << std::endl;
    return 0;
}

