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

void Car::sound() const {
    std::cout << "Vroooom!!!" << std::endl;
}