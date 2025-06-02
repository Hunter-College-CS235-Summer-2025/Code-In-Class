// Author: Sadab Hafiz
// Date: 05-30-2024
// Implements the Bird class

#include "Bird.hpp"

// Inherently calls the Animal constructor default constructor
Bird::Bird(){std::cout << "Bird Default Constructor" << std::endl;}

// Explicitly calls the Animal parameterized constructor
Bird::Bird(std::string name, float height, float wing_span) : Animal(name,2) {
    max_flight_height_ = height;
    wing_span_ = wing_span;
}

Bird::~Bird(){
    std::cout << "Bird Destructor" << std::endl;
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

std::string Bird::toString() const{
    // Calling the base class toString() function explicitly
    std::string base_class_output = Animal::toString();
    return base_class_output + "\n" + "Maximum Flight Height: " + std::to_string(max_flight_height_)
              + "\n" + "Wing Span: " + std::to_string(wing_span_);
}

std::ostream& operator<<(std::ostream& os, const Bird& bird){
    os << bird.toString();
    return os;
}
