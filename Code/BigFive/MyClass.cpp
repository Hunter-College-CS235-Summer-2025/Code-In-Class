/**
 * Author: Sadab Hafiz
 * Date: 06/06/2024
 * Description: Implementation of MyClass
 * Reference: https://en.cppreference.com/w/cpp/language/rule_of_three
 */

#include "MyClass.hpp"
#include <iostream>

MyClass::MyClass() : data_{nullptr}, size_{0} {
    std::cout << "Default constructor invoked" << std::endl;
}

MyClass::MyClass(int size_) : size_{size_} {
    data_ = new int[size_];
    std::cout << "Parametrized constructor invoked" << std::endl;
}

MyClass::MyClass(const MyClass& other) : size_{other.size_} {
    data_ = new int[size_];
    // Copy the items from other object
    for (int i = 0; i < size_; i++) {
        data_[i] = other.data_[i];
    }
    std::cout << "Copy constructor invoked" << std::endl;
}

MyClass::MyClass(MyClass&& other) : data_{other.data_}, size_{other.size_} {
    other.data_ = nullptr;
    other.size_ = 0;
    std::cout << "Move constructor invoked" << std::endl;
}

MyClass::~MyClass() {
    delete[] data_;
    std::cout << "Destructor invoked" << std::endl;
}

MyClass& MyClass::operator=(const MyClass& other) {
    // if the object being copied from is not this object
    // delete the current data and deep copy the data from other
    if (this != &other) {
        delete[] data_;
        size_ = other.size_;
        data_ = new int[size_];
        for (int i = 0; i < size_; i++) {
            data_[i] = other.data_[i];
        }
    }
    std::cout << "Copy assignment operator invoked" << std::endl;
    return *this;
}

MyClass& MyClass::operator=(MyClass&& other) {
    // if the object being moved from is not this object
    // delete the current data and shallow copy the data from other
    if (this != &other) {
        delete[] data_;
        data_ = other.data_;
        size_ = other.size_;
        other.data_ = nullptr;
        other.size_ = 0;
    }
    std::cout << "Move assignment operator invoked" << std::endl;
    return *this;
}

