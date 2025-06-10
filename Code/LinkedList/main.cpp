/**
 * @file main.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Testing the LinkedList class
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
# include "LinkedList.hpp"
# include <iostream>
# include <cassert>

void printNTimes(std::string message, int n=1){
    for(int i=0; i<n; i++){
        std::cout << message << std::endl;
    }
}

int main() {
    printNTimes("Hello",10);
    LinkedList<std::string> groceries;
    groceries.insert("eggs");
    groceries.insert("sugar");
    groceries.insert("milk");
    groceries.insert("salt",1);
    groceries[3] = "butter";
    for(int i=0; i<groceries.getSize(); i++) {
        std::cout << groceries[i] << std::endl;
    }
    try{
        if (groceries[4] == "bananas") {
            std::cout << "oh no!" << std::endl;
        }
    }
    catch(std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
    assert(groceries.getSize() == 0);
    std::cout << "Here" << std::endl;
}
