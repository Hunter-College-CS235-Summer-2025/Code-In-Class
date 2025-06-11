#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

enum Terrain {UNKNOWN,AIR,WATER,LAND};

class Vehicle{
    public:
        // Constructors
        Vehicle();
        Vehicle(Terrain terrain, bool has_wheels);
        // Getters
        Terrain getTerrain() const;
        bool getHasWheels() const;
        // Setters
        void setTerrain(Terrain terrain);
        void setHasWheels(bool has_wheels);
        // Sound
        virtual void sound() const = 0;
    protected:
        Terrain terrain_;
        bool has_wheels_;
};

#endif
