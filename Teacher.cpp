#include "Teacher.h"
#include <sstream>

// Constructor defect
Teacher::Teacher() : Employee(), subject(""), hours(0) {
}

// Constructor 
Teacher::Teacher(std::string name, int id, int age, std::string subject, int hours)
    : Employee(name, id, age), subject(subject), hours(hours) {
}

// Getters
std::string Teacher::getSubject() {
    return subject;
}

int Teacher::getHours() {
    return hours;
}

// Setters
void Teacher::setSubject( std::string subject) {
    this->subject = subject;
}

void Teacher::setHours(int hours) {
    this->hours = hours;
}

// Public Method
std::string Teacher::getInfo() const {
    std::stringstream info;
    info << "Teacher Information:\n";
    info << "Name: " << getName() << "\n";
    info << "ID: " << getId() << "\n";
    info << "Age: " << getAge() << "\n";
    info << "Subject: " << subject << "\n";
    info << "Hours: " << hours;
    return info.str();
}
