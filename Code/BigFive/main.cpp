// Main function using MyClass to demonstrate when different constructors and operators get invoked
#include "MyClass.hpp"
#include <utility>

int main() {
    // Constructor
    MyClass obj1;
    // Parameterized Constructor
    MyClass obj2(5);
    // Copy Constructor
    MyClass obj3 = obj2;
    // Move Constructor
    MyClass obj4(std::move(obj3));
    // Copy Assignment
    obj1 = obj2;
    // Move Assignment
    obj2 = MyClass(3);
}

