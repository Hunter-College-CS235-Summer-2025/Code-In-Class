# include "Subjects.hpp"

// Constructors
Subjects::Subjects(){
    code_ = "NULL";
    credits_ = 0;
    name_ = "NULL";
    std::cout << "Base Default Constructor Called!" << std::endl;
}
Subjects::Subjects(std::string code, int credits, std::string name) :
                                                    code_(code), credits_(credits), name_(name) { 
    std::cout << "Base Parameterized Constructor Called!" << std::endl;
}
// Destructor
Subjects::~Subjects() {
    std::cout << "Base Destructor Called!" << std::endl;
}

// Getters
std::string Subjects::getCode() const{
    return code_;
}        
int Subjects::getCredits() const{
    return credits_;
}
std::string Subjects::getName() const{
    return name_;
}

// Setters
void Subjects::setCode(const std::string& code){
    code_ = code;
} 
bool Subjects::setCredits(const int& credits) {
    if (credits <= 0 || credits > 4) {
        return false;
    }
    credits_ = credits;
    return true;
}
void Subjects::setName(const std::string& name){
    name_ = name;
}