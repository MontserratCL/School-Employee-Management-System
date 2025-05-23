#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    int age;

public:

// Constructors
    Employee();
    Employee(std::string name, int id, int age);

    // Getters
    std::string getName();
    int getId();
    int getAge();
    
    // Setters
    void setName(std::string name);
    void setId(int id);
    void setAge(int age);
};

#endif 
