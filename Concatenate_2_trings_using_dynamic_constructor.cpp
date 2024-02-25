#include <iostream>
#include <conio.h>
#include <cstring>

class dc {
    char *s;
    int l;

public:
    dc() {
        l = 0;
        s = new char[l + 1];
        s[0] = '\0'; // Ensure string termination
    }

    dc(const char *ss) {
        l = strlen(ss);
        s = new char[l + 1];
        strcpy(s, ss);
    }

    void put() {
        std::cout << s << std::endl;
    }

    void join(dc &d1, dc &d2) {
        l = strlen(d1.s) + strlen(d2.s);
        delete[] s;
        s = new char[l + 1];
        strcpy(s, d1.s);
        strcat(s, d2.s);
    }

    ~dc() {
        delete[] s;
    }
};

int main() {
    char s1[100], s2[100];
    clrscr();
    std::cout << "Enter string 1:";
    std::cin.getline(s1, 100);
    dc d1(s1);
    std::cout << "Enter string 2:";
    std::cin.getline(s2, 100);
    std::cout << "String 1 : ";
    d1.put();
    dc d2(s2);
    std::cout << "String 2 : ";
    d2.put();
    dc d3;
    d3.join(d1, d2);
    std::cout << "\nConcatenated string :";
    d3.put();
    getch();
    return 0;
}

