#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1;
    student1.name = "John";
    student1.age = 20;

    student1.introduce();

    return 0;
}
