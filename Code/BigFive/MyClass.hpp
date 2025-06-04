/**
 * Author: Sadab Hafiz
 * Date: 06/06/2024
 * Description: Simple class showing when the big five get invoked
 * Reference: https://en.cppreference.com/w/cpp/language/rule_of_three
 */

#ifndef MY_CLASS_H
#define MY_CLASS_H

class MyClass {
    private:
        int* data_;
        int size_;
    public:
        MyClass();
        MyClass(int size);
        MyClass(const MyClass& other);
        MyClass(MyClass&& other);
        ~MyClass();
        MyClass& operator=(const MyClass& other);
        MyClass& operator=(MyClass&& other);
};

#endif

