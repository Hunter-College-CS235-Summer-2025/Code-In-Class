#include <iostream>
#include <vector>
#include "Animal.hpp"
#include "Bird.hpp"
#include "Cat.hpp"

int main(){
    Bird robin{"Magpie Robin",1000,50};
    Cat smiley{"Smiley","American Shorthair"};

    std::vector<Animal*> animals;
    animals.push_back(&robin);
    animals.push_back(&smiley);

    for(auto a: animals) {
        a->sound();
    }
}
