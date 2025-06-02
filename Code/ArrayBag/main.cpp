/**
 * @file main.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief  Demonstrating the use of function templates and class templates
 * @date 2025-06-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
# include "ArrayBag.hpp"
# include <iostream>
# include <vector>
# include <string>

/**
 * @brief Take a vector of any type and prints out the items separated by an end line
 * 
 * @tparam T Any arbitrary type with working output stream
 * @param vec A vector of items to be printed
 */
template <class T>
void print_vector(std::vector<T> vec) {
    for(int i=0; i<vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    // Default Constructor
    ArrayBag<int> bag;
    // Testing getCurrentSize and add functions
    std::cout << bag.getCurrentSize() << std::endl;
    for(int i=0; i<199; i++) {
        bag.add(i);
    }
    std::cout << bag.add(120370192) << std::endl;
    // Demonstrating how the template function can be used with different datatypes
    ArrayBag<std::string> str_bag;
    str_bag.add("CS");
    str_bag.add("CS");
    str_bag.add("CS");
    str_bag.add("CS");
    str_bag.add("CS");
    print_vector(str_bag.toVector());
}
