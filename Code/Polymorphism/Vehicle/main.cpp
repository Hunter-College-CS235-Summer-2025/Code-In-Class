#include <iostream>
#include <vector>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Train.hpp"

int main(){
    Car suv(LAND,1000000,4);
    // suv.sound();
    Train F_train(LAND,true,15);
    // F_train.sound();

    std::vector<Vehicle*> vehicles;
    vehicles.push_back(&suv);
    vehicles.push_back(&F_train);

    for (auto v: vehicles) {
        v->sound();
    }
}
