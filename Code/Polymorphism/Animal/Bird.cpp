#include "Bird.hpp"

Bird::Bird() : Animal("",2) {std::cout << "Bird Default Constructor" << std::endl;}

// Explicitly calls the Animal parameterized constructor
Bird::Bird(std::string name, float height, float wing_span) : Animal(name,2) {
    max_flight_height_ = height;
    wing_span_ = wing_span;
}

float Bird::getMaxFlightHeight() const{
    return max_flight_height_;
}

float Bird::getWingSpan() const{
    return wing_span_;
}
        
void Bird::setMaxFlightHeight(float height){
    max_flight_height_ = height;
}
       
void Bird::setWingSpan(float wing_span){
    wing_span_ = wing_span;
}

void Bird::sound() const{
    std::cout << "Chirp!!!" << std::endl;
}
