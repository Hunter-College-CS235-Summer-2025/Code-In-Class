#include "Vehicle.hpp"

Vehicle::Vehicle(){
    terrain_ = UNKNOWN;
    has_wheels_ = false;
    std::cout << "VEHICLE DEFAULT CONSTRUCTOR" << std::endl;
}

Vehicle::Vehicle(Terrain terrain, bool has_wheels) : terrain_(terrain), has_wheels_(has_wheels) { }

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
