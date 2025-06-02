/**
 * @file Classroom.hpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Classroom class header
 * @date 2025-05-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
# pragma once

# include <iostream>
# include <vector>
# include "Student.hpp"


/**
 * @brief Represents a classroom
 * 
 */
class Classroom {
    public:
        Classroom();    // Default Constructor
        /**
         * @brief Construct a new Classroom object
         * 
         * @param num: number of students in the class 
         * @param room: room number of the class
         */
        Classroom(int num, std::string room);
        int getNumStudents() const;
        std::string getRoom() const;
        bool setNumStudents(int num);
        void setRoom(std::string room);
    private:
        int numStudents;
        std::string room_;
        std::vector<Student> roster_;
};
