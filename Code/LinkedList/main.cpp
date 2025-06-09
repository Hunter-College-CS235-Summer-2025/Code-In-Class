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

int main() {
    // TODO: overload insert function to work with one argument
    LinkedList<std::string> groceries;
    groceries.insert("eggs",groceries.getSize());
    groceries.insert("sugar",groceries.getSize());
    groceries.insert("milk",groceries.getSize());
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
        std::cout << "phew!" << std::endl;
    }
}
