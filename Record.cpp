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
    teachers.push_back(Teacher());
    admins.push_back(Admin());
};


Record::Record(vector <Teacher> teachers_, vector <Admin> admins_){
    for (int i = 0; i < teachers_.size(); i++){
        teachers.push_back(teachers_[i]);
    }
        
    for (int i = 0; i < admins_.size(); i++){
        admins.push_back(admins_[i]);
    }
};

//----------------------------------------------------------
//Getters


Teacher Record::getTeacher(int num){
    return teachers[num-1];
};

vector <Teacher> Record::getTeacher(){
    return teachers;
};

Admin Record::getAdmin(int num){
    return admins[num-1];
};

vector <Admin> Record::getAdmin(){
    return admins;
};


//----------------------------------------------------------
//Setters


void Record::setTeachers(vector <Teacher> teachers_){
    int size = teachers.size();
    for(int i = 0; i < size ; i++){
        teachers.pop_back();
    }
    
    for (int i = 0; i < teachers_.size(); i++){
        teachers.push_back(teachers_[i]);
    }
};


void Record::setAdmins(vector <Admin> admins_){
    int size = admins.size();
    for(int i = 0; i < size; i++){
        Record::admins.pop_back();
    }
     
    for (int i = 0; i < admins_.size(); i++){
        admins.push_back(admins_[i]);
    }
};

//----------------------------------------------------------
//Methods


void Record::addTeacher(Teacher teacher_){
    teachers.push_back(teacher_);
};


void Record::addAdmin(Admin admins_){
    admins.push_back(admins_);
};

