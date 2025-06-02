# pragma once
# include "Subject.hpp"
# include <iostream>

class Elective: public Subject {
    private:
        bool required_;
    public:
        // Constructors
        Elective();
        Elective(std::string code, int credits, std::string name, bool required);
        // Destructor
        ~Elective();
        // Getter
        bool getRequired() const;
        // Setter
        void setRequired(const bool& required);
};
