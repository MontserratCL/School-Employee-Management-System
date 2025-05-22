#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    int id;
    int age;

public:

// Constructors
    Employee();
    Employee(const std::string& name, int id, int age);

    // Getters
    std::string getName() const;
    int getId() const;
    int getAge() const;
    
    // Setters
    void setName(const std::string& name);
    void setId(int id);
    void setAge(int age);
};

#endif 
