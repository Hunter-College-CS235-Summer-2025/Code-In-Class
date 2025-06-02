// Author: Sadab Hafiz
// Date: 05-30-2024
// Implements the Vehicle class

#include "Vehicle.hpp"

Vehicle::Vehicle(){
    terrain_ = UNKNOWN;
    has_wheels_ = false;
    std::cout << "VEHICLE DEFAULT CONSTRUCTOR" << std::endl;
}

Vehicle::Vehicle(Terrain terrain, bool has_wheels) : terrain_(terrain), has_wheels_(has_wheels) { }

Vehicle::~Vehicle(){
    std::cout << "VEHICLE DESTRUCTOR" << std::endl;
}

Terrain Vehicle::getTerrain() const{
    return terrain_;
}
        
bool Vehicle::getHasWheels() const{
    return has_wheels_;
}
        
void Vehicle::setTerrain(Terrain terrain){
    terrain_ = terrain;
}

void Vehicle::setHasWheels(bool has_wheels){
    has_wheels_ = has_wheels;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle){
    os << vehicle.toString();
    return os;
}

std::string Vehicle::toString() const{
    std::string temp = "Has Wheels: ";
    // Since Booleans can't be added to strings, we use conditional to add the words "True" or "False"
    if(has_wheels_ == true){
        temp += "True";
    }
    else{
        temp += "False";
    }
    temp += "\nTerrain: ";
    // Enum labels are not strings, we need to do something similar to what we did for boolean
    if(terrain_ == UNKNOWN){
        temp += "UNKNOWN";
    }
    else if(terrain_ == AIR){
        temp += "AIR";
    }
    else if(terrain_ == LAND){
        temp += "LAND";
    }
    else if(terrain_ == WATER){
        temp += "WATER";
    }
    return temp;
}
