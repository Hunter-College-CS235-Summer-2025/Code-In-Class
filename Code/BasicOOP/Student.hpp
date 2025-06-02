# pragma once

# include <string>

class Student{
    public:
        Student() = default;
        Student(std::string name);
    private:
        std::string name_;        
};
