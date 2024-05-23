#include <iostream>
#include <cstring>

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;

    int length = strlen(str);
    std::cout << "Length of the string: " << length << std::endl;
    return 0;
}
