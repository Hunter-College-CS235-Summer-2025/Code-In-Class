#include "Cat.hpp"

Cat::Cat() : Animal("",4) { std::cout << "Cat Default Constructor" << std::endl; }

Cat::Cat(std::string name,std::string breed) : Animal(name,4) { breed_ = breed; }

std::string Cat::getBreed() const { return breed_; }

void Cat::setBreed(std::string breed) { breed_ = breed; }

void Cat::sound() const { std::cout << "Meow!!!" << std::endl; }
