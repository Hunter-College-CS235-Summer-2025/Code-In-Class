/**
 * @file Date.hpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Date class header file
 * @date 2025-06-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
# pragma once

#include <iostream>

/**
 * @brief Simple Date class to show operator overloading
 * @note Only relevant functions are documented properly below
 */
class Date{
    public:
        // Constructors
        Date(){};
        Date(int month, int day, int year);
        // Getters
        int getMonth() const;
        int getDay() const;
        int getYear() const; 
        // Setters
        bool setMonth(const int& month);
        bool setDay(const int& day);
        bool setYear(const int& year);
        /**
         * @brief 
         * 
         * @param os Output stream
         * @param date Date object to output
         * @return std::ostream& Reference to the output stream after inserting the formatted Date
         */
        friend std::ostream& operator<<(std::ostream& os, const Date& date);
        /**
         * @brief Equality comparison operator for Date
         * 
         * @param other Date object to compare
         * @return true if all attributes are equal
         * @return false otherwise
         */
        bool operator==(const Date& other);
        /**
         * @brief Less-than operator for comparing Date objects
         * 
         * @param other Date object to compare
         * @return true if this Date object is considered less than the other
         * @return false otherwise
         */
        bool operator<(const Date& other);
    private:
        // Date members
        int month;
        int day;
        int year;
        /**
         * @brief Return the date in string format (month-day-year)
         * 
         * @return const std::string* 
         */
        const std::string* dateToString() const;
};
