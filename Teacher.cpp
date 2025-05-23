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
//public method 
std::string Teacher::getInfo()  {
    std::string text = "Name: " + getName() + "\nAge: " + std::to_string(getAge()) + "\nID: " + std::to_string(getId()) + "\nSubject: " + subject + "\nHours: " + std::to_string(hours);
    return text;
}

#endif
