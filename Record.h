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
        vector <Teacher> teachers;
        vector <Admin> admins;

    public:
        //Constructors
        Record();
            
        Record(vector <Teacher> teachers_, vector <Admin> admins_);

        //----------------------------------------------------------
        //Getters
        Teacher getTeacher(int num);

        vector <Teacher> getTeacher();

        Admin getAdmin(int num);

        vector <Admin> getAdmin();


        //----------------------------------------------------------
        //Setters
        void setTeachers(vector <Teacher> teachers_);

        void setAdmins(vector <Admin> admins_);

        //----------------------------------------------------------
        //Methods

        void addTeacher(Teacher teacher_);

        void addAdmin(Admin admin_);


};

#endif