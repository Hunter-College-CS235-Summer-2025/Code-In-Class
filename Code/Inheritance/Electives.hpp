# pragma once
# include "Subjects.hpp"
# include <iostream>

class Electives: public Subjects {
    private:
        bool required_;
    public:
        // Constructors
        Electives();
        Electives(std::string code, int credits, std::string name, bool required);
        // Destructor
        ~Electives();
        // Getter
        bool getRequired() const;
        // Setter
        void setRequired(const bool& required);
};