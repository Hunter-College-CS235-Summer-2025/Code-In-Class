#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor" << std::endl;
};

Animal::Animal(std::string name, int legs) : name_(name), legs_(legs) {};

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
