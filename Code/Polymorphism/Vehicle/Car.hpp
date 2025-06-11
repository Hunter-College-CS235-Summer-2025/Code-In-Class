#ifndef CAR_H
#define CAR_H

// Base class should be imported
#include "Vehicle.hpp"
#include <iostream>

// public inheritance means Car inherits the public data from Vehicle
// additionally, the protected attributes get inherited as protected in Car class
class Car : public Vehicle {
    public:
        // Constructors
        Car();
        Car(Terrain terrain,double mileage,int seats);
        // Getters
        double getMileage() const;
        int getSeats() const;
        // Setters
        void setMileage(double mileage);
        void setSeats(int seats);
        // Sound
        virtual void sound() const override;
    private:
        double mileage_;
        int seats_;
};

#endif
