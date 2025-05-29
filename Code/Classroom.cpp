# include "Classroom.hpp"

Classroom::Classroom() :  numStudents(0), room_("") {}

Classroom::Classroom(int num, std::string room){
    if (num < 0){
        numStudents = 0;
    }
    numStudents = num;
    this->room_ = room;
}

int Classroom::getNumStudents() const{
    return numStudents;
}

std::string Classroom::getRoom() const{
    return room_;
}

bool Classroom::setNumStudents(int num){
    if (num < 0){
        return false;
    }
    numStudents = num;
    return true;
}

void Classroom::setRoom(std::string room){
    this->room_ = room;
}
