#ifndef TEACHER_H
#define TEACHER_H
#include "Employee.h"
#include <string>

class Teacher : public Employee {
private:
    std::string subject;
    int hours;

public:
    // Constructor
    Teacher();
    Teacher(std::string name, int id, int age, std::string subject, int hours);
    
    // Getters
    std::string getSubject();
    int getHours();
    
    // Setters
    void setSubject(std::string subject);
    void setHours(int hours);
    
    // Method for info
    std::string getInfo() const;
};
#endif
