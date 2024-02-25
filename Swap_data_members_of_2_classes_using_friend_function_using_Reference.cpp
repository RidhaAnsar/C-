#include <iostream>
#include <conio.h>

class B; // Forward declaration of class B

class A {
    int a;

public:
    void read() {
        std::cout << "Enter no:";
        std::cin >> a;
    }

    void put() {
        std::cout << "\nNo:" << a;
    }

    friend void swap(A &, B &); // Declare swap as friend
};

class B {
    int a;

public:
    void read() {
        std::cout << "Enter no:";
        std::cin >> a;
    }

    void put() {
        std::cout << "\nNo:" << a;
    }

    friend void swap(A &, B &); // Declare swap as friend
};

// Define the swap function
void swap(A &a, B &b) {
    int t = a.a;
    a.a = b.a;
    b.a = t;
}

int main() {
    clrscr();
    A o1;
    B o2;
    o1.read();
    o2.read();
    std::cout << "\nBefore swap:";
    o1.put();
    o2.put();
    std::cout << "\nAfter swap:";
    swap(o1, o2);
    o1.put();
    o2.put();
    getch();
    return 0;
}

