#include <iostream>
#include <conio.h>

class item {
  static int c;
  int n;
public:
  void getdata(int);
  static void show() {
    std::cout << "\nc=" << c;
  }
  void display() {
    std::cout << "\nn=" << n;
  }
};

int item::c;

void item::getdata(int a) {
  n = a;
  c++;
}

int main() {
  clrsc

