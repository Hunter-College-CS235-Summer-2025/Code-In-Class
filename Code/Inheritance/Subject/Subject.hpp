# pragma once

# include <string>
# include <iostream>

class Subject
{
    private:
        std::string code_;
        int credits_;
        std::string name_;
    public:
        // Constructors
        Subject();
        Subject(std::string code, int credits, std::string name);
        // Destructor
        ~Subject();
        // Getters
        std::string getCode() const;        
        int getCredits() const;
        std::string getName() const;
        // Setters
        void setCode(const std::string& code);        
        bool setCredits(const int& credits);
        void setName(const std::string& name);
};
