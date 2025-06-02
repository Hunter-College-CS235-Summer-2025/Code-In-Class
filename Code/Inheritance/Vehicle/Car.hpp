// Author: Sadab Hafiz
// Date: 05-30-2024
// A simple Car class that inherits from Vehicle class

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
        // Destructor
        ~Car();
        // Getters
        double getMileage() const;
        int getSeats() const;
        // Setters
        void setMileage(double mileage);
        void setSeats(int seats);
        // friend function doesn't get inherited so we implement it here for Car
        friend std::ostream& operator<<(std::ostream& os, const Car& car);
    private:
        double mileage_;
        int seats_;
        // Overriding the behavior of toString for the Car class
        std::string toString() const;
};

#endif
