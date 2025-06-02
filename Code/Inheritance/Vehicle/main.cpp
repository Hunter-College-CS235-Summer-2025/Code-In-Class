// Author: Sadab Hafiz
// Date: 05-30-2024
// Main function to test the Vehicle and Car class

#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"

int main(){
    // Look at the order of the constructor and destructor in the output statements
    Vehicle generic;
    Car suv;
    std::cout << generic << std::endl;
    std::cout << suv << std::endl;
}
