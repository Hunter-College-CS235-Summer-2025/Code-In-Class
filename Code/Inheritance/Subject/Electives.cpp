# include "Elective.hpp"
// Constructors
Elective::Elective() : Subjects(){
    required_ = false;
    std::cout << "Derived Constructor Called!" << std::endl;
}
Elective::Elective(std::string code, int credits, std::string name, bool required) :
    Subject(code,credits,name), required_(required) { 
    std::cout << "Derived Parameterized Constructor Called!" << std::endl;
}
// Destructor
Elective::~Elective() {
    std::cout << "Derived Destructor Called!" << std::endl;
}
// Getter
bool Elective::getRequired() const {
    return required_;
}
// Setter
void Elective::setRequired(const bool& required){
    required_ = required;
}