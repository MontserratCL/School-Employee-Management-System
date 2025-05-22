#include "Employee.h"

//El constructor por defecto 
Employee:Employee() : name(""), id(0), age(0) {
}
// COnstructor 
Employee:Employee(std::string& name, int id, int age) 
  : name(name), id(id), age(age) {
}
// Getters
std::string Employee::getName() {
    return name;
}

int Employee::getId() {
    return id;
}

int Employee::getAge(){
    return age;
}

// Setters
void Employee::setName(std::string& name) {
    this->name = name;
}

void Employee::setId(int id) {
    this->id = id;
}

void Employee::setAge(int age) {
    this->age = age;
}
