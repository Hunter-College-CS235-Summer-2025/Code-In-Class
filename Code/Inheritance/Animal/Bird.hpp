// Author: Sadab Hafiz
// Date: 05-30-2024
// A simple Bird class that inherits from Animal class

#ifndef BIRDS_H
#define BIRDS_H

#include "Animal.hpp"

class Bird : public Animal{
    public:
        // Constructors
        Bird();
        Bird(std::string name,float height,float wing_span);
        // Destructor
        ~Bird();
        // Getters
        float getMaxFlightHeight() const;
        float getWingSpan() const;
        // Setters
        void setMaxFlightHeight(float height);
        void setWingSpan(float wing_span);
        friend std::ostream& operator<<(std::ostream& os, const Bird& bird);
    protected:
        // Override the toString() function from parent class
        std::string toString() const;
        float max_flight_height_;
        float wing_span_;
};

#endif
