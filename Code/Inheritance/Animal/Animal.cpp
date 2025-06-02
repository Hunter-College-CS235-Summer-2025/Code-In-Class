// Author: Sadab Hafiz
// Date: 05-30-2024
// Implements the animal class

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor" << std::endl;
};

Animal::Animal(std::string name, int legs) : name_(name), legs_(legs) {};

Animal::~Animal(){
    std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getName() const{
    return name_;
}

int Animal::getLegs() const{
    return legs_;
}

void Animal::setName(std::string name){
    name_ = name;
}

void Animal::setLegs(int legs){
    legs_ = legs;
}

std::string Animal::toString() const{
    return "Name: " + name_ + "\n" "Number of legs: " + std::to_string(legs_);   
}

std::ostream& operator<<(std::ostream& os, const Animal& animal){
    os << animal.toString();
    return os;
}
