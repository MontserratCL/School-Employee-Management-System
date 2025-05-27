#ifndef RECORD_H
#define RECORD_H

#include <iostream>
#include <vector>
#include <string>

#include "Employee.h"
#include "Teacher.h"
#include "Admin.h"


using namespace std;

class Record{
    private:
        vector <Employee*> employees;

    public:
        //Constructors
        Record();
            
        Record(vector <Employee*> employees_);

        //----------------------------------------------------------
        //Getters
        Employee* getEmployee(int num);

        vector <Employee*> getEmployee();


        //----------------------------------------------------------
        //Setters
        void setEmployees(vector <Employee*> employees_);

        //----------------------------------------------------------
        //Methods

        void addEmployee(Employee* employee_);

};

#endif