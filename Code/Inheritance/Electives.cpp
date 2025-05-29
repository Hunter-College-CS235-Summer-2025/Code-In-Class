# include "Electives.hpp"
// Constructors
Electives::Electives() : Subjects(){
    required_ = false;
    std::cout << "Derived Constructor Called!" << std::endl;
}
Electives::Electives(std::string code, int credits, std::string name, bool required) :
    Subjects(code,credits,name), required_(required) { 
    std::cout << "Derived Parameterized Constructor Called!" << std::endl;
}
// Destructor
Electives::~Electives() {
    std::cout << "Derived Destructor Called!" << std::endl;
}
// Getter
bool Electives::getRequired() const {
    return required_;
}
// Setter
void Electives::setRequired(const bool& required){
    required_ = required;
}