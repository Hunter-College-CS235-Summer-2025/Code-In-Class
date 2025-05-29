# include "Subjects.hpp"
# include "Electives.hpp"
# include <iostream>

int main(){
    Subjects at_hunter; // Base Default Constructor
    // Base Constructor // Derived Parameterized Constructor
    Electives gen_ed("WGS123",3,"Women and Gender Studies",false);
    Electives* temp = new Electives;    // Default Derived Constructor
    delete temp;                        // Derived Destructor // Base Destructor
    temp = nullptr;
    std::cout << gen_ed.getName() << std::endl;    // "Women and Gender Studies"
}
