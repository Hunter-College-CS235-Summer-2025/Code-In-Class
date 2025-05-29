# pragma once

# include <string>
# include <iostream>

class Subjects
{
    private:
        std::string code_;
        int credits_;
        std::string name_;
    public:
        // Constructors
        Subjects();
        Subjects(std::string code, int credits, std::string name);
        // Destructor
        ~Subjects();
        // Getters
        std::string getCode() const;        
        int getCredits() const;
        std::string getName() const;
        // Setters
        void setCode(const std::string& code);        
        bool setCredits(const int& credits);
        void setName(const std::string& name);
};
