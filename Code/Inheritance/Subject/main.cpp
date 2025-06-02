# include "Subject.hpp"
# include "Elective.hpp"
# include <iostream>

int main(){
    // look at the output to understand the order of calling the constructors and destructors
    Subject at_hunter;
    Elective gen_ed("WGS123",3,"Women and Gender Studies",false);
    Elective* temp = new Elective;
    delete temp;      
    temp = nullptr;
    std::cout << gen_ed.getName() << std::endl;
}
