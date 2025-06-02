#include "Car.hpp"

Car::Car(){
    seats_ = 0;
    mileage_ = 0;
    std::cout << "CAR DEFAULT CONSTRUCTOR" << std::endl;
}

Car::Car(Terrain terrain,double mileage,int seats) : Vehicle(terrain,true){
    mileage_ = mileage;
    seats_ = seats;
}
Car::~Car(){
    std::cout << "CAR DESTRUCTOR" << std::endl;
}

double Car::getMileage() const{
    return mileage_;
}

int Car::getSeats() const{
    return seats_;
}

void Car::setMileage(double mileage){
    mileage_ = mileage;
}

void Car::setSeats(int seats){
    seats_ = seats;
}

std::ostream& operator<<(std::ostream& os, const Car& car){
    os << car.toString();
    return os;
}

std::string Car::toString() const{
    std::string temp = Vehicle::toString();
    temp = temp + "\n" + "Number of seats: " + std::to_string(seats_) +
            "\n" + "Mileage: " + std::to_string(mileage_);
    return temp;
}

