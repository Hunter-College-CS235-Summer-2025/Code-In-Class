#include "Train.hpp"

Train::Train() : Vehicle(LAND,true) { std::cout << "TRAIN DEFAULT CONSTRUCTOR" << std::endl; };

Train::Train(Terrain terrain,bool has_wheels,int carts) : Vehicle(terrain,has_wheels) {
    carts_ = carts;
}

int Train::getCarts() const { return carts_; }

void Train::setCarts(int carts) { carts_ = carts; }

void Train::sound() const { std::cout << "ChooChoo!!!" << std::endl; }
