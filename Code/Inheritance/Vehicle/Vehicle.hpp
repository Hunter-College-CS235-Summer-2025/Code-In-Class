// Author: Sadab Hafiz
// Date: 05-30-2024
// A simple Vehicle class that serves as base class

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

enum Terrain {UNKNOWN,AIR,WATER,LAND};

class Vehicle{
    public:
        // Constructors
        Vehicle();
        Vehicle(Terrain terrain, bool has_wheels);
        // Destructor
        ~Vehicle();
        // Getters
        Terrain getTerrain() const;
        bool getHasWheels() const;
        // Setters
        void setTerrain(Terrain terrain);
        void setHasWheels(bool has_wheels);
        // Overload the print operator
        friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);
    protected:
        Terrain terrain_;
        bool has_wheels_;
        std::string toString() const;
};

#endif
