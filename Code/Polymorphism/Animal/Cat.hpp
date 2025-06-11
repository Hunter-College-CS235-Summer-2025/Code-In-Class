#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal{
    public:
        // Constructors
        Cat();
        Cat(std::string name,std::string breed);
        // Getters
        std::string getBreed() const;
        // Setters
        void setBreed(std::string breed);
        // Sound
        virtual void sound() const override;
    protected:
        std::string breed_;
};

#endif
