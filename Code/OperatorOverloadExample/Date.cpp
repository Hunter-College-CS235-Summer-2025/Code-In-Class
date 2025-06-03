/**
 * @file Date.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Implementation for Date class
 * @date 2025-06-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "Date.hpp"

Date::Date(int day, int month, int year){
    this -> day = day;
    this -> month = month;
    this -> year = year;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}

int Date::getYear() const{
    return year;
}

bool Date::setMonth(const int& month){
    if(month <= 0 || month > 12){
        return false;
    }
    this -> month = month;
    return true;
}

bool Date::setDay(const int& day){
    if(day <= 0 || day > 31){
        return false;
    }
    this -> day = day;
    return true;
}

bool Date::setYear(const int& year){
    if(year <= 0){
        return false;
    }
    this -> year = year;
    return true;
}

const std::string* Date::dateToString() const{
    std::string* date = new std::string;
    *date = *date + std::to_string(month) + " - " + std::to_string(day) + " - " + std::to_string(year);
    return date;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << *date.dateToString();
    return os;
}

bool Date::operator==(const Date& other) {
    // return true if all attributes of this object is equal to the other object
    return this->day == other.day && this->month == other.month && this->year == other.year;
}

bool Date::operator<(const Date& other) {
    // if the year is not the same, return true if this object's year is less than other's year
    if (this->year != other.year) {
        return this->year < other.year;
    }
    // if year is the same, but month is different, return true depending on the month
    else if (this->month != other.month)
    {
        return this->month < other.month;
    }
    // if year and month are the same, return true if day of this object is less than the day of other
    return this->day < other.day;
}

int main(){
    Date today(3,6,2025);
    std::cout << today << std::endl;
    Date yesterday(2,6,2025);
    if (yesterday < today) {
        std::cout << "< operator works(?)" <<  std::endl;
    }
    Date midterm(17,6,2025);
    if (today == midterm) {
        std::cout << "We're Cooked!" << std::endl;
    }
}
