#ifndef TRAIN_H
#define TRAIN_H

// Base class should be imported
#include "Vehicle.hpp"
#include <iostream>

// public inheritance means Car inherits the public data from Vehicle
// additionally, the protected attributes get inherited as protected in Car class
class Train : public Vehicle {
    public:
        // Constructors
        Train();
        Train(Terrain terrain, bool has_wheels, int carts);
        // Getters
        int getCarts() const;
        // Setters
        void setCarts(int carts);
        // Sound
        virtual void sound() const final override;
    private:
        int carts_;
};

#endif