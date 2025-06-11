#ifndef BIRDS_H
#define BIRDS_H

#include "Animal.hpp"

class Bird : public Animal{
    public:
        // Constructors
        Bird();
        Bird(std::string name,float height,float wing_span);
        // Getters
        float getMaxFlightHeight() const;
        float getWingSpan() const;
        // Setters
        void setMaxFlightHeight(float height);
        void setWingSpan(float wing_span);
        // Sound
        virtual void sound() const override;
    protected:
        float max_flight_height_;
        float wing_span_;
};

#endif
