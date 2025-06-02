// Author: Sadab Hafiz
// Date: 05-30-2024
// Testing the Animal and Bird class

#include <iostream>
#include "Animal.hpp"
#include "Bird.hpp"

int main(){
    Animal cat{"Cat",4};
    std::cout << cat << std::endl;
    Bird penguin{"Penguin",5,50};
    std::cout << penguin << std::endl;
    // Look at the order of the constructor and destructor in the output statements
    Animal a;
    Bird b;
}
