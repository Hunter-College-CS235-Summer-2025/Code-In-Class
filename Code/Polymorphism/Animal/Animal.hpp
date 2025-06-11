#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    public:
        // Constructors
        Animal();
        Animal(std::string name, int legs);
        // Getters
        std::string getName() const;
        int getLegs() const;
        // Setters
        void setName(std::string name);
        void setLegs(int legs);
        // Sound()
        virtual void sound() const = 0;
    protected:
        std::string name_;
        int legs_;
};

#endif
