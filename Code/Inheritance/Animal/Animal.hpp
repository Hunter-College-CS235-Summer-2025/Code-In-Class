// Author: Sadab Hafiz
// Date: 05-30-2024
// A simple Animal class that serves as a parent class

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    public:
        // Constructors
        Animal();
        Animal(std::string name, int legs);
        // Destructor
        ~Animal();
        // Getters
        std::string getName() const;
        int getLegs() const;
        // Setters
        void setName(std::string name);
        void setLegs(int legs);
        // Overload the cout operator
        friend std::ostream& operator<<(std::ostream& os, const Animal& animal);
    protected:
        std::string name_;
        int legs_;
        std::string toString() const;
};

#endif
