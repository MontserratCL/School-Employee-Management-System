/*
Title: Record Cpp File
Date: May 21, 2025
Description: 
Implementation of the Record Header File methods.
*/
#include <iostream>
#include <vector>
#include <string>

#include "Record.h"
#include "Employee.h"
#include "Teacher.h"
#include "Admin.h"



using namespace std;



Record::Record(){
    Teacher teach = Teacher();
    employees.push_back(&teach);
};
            
Record::Record(vector <Employee*> employees_){
    for (int i = 0; i < employees_.size(); i++){
        employees.push_back(employees_[i]);
    }
};

//----------------------------------------------------------
//Getters
Employee* Record::getEmployee(int num){
    return employees[num-1];
};

vector <Employee*> Record::getEmployee(){
    return employees;
};


//----------------------------------------------------------
//Setters
void Record::setEmployees(vector <Employee*> employees_){
    int size = employees.size();
    for(int i = 0; i < size; i++){
        Record::employees.pop_back();
    }

    for (int i = 0; i < employees_.size(); i++){
        employees.push_back(employees_[i]);
    }
};

//----------------------------------------------------------
//Methods

void Record::addEmployee(Employee* employee_){
    employees.push_back(employee_);
};

