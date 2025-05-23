#include <string>
#include <vector>
#include <iostream>

#include "Admin.h"

using namespace std;
        
Admin::Admin(){
	name = "";
	age = 0;
	id = 0;
	department = "";
	entryHour = 0;
	exitHour = 0;
}

Admin::Admin(string name_, int age_, int id_, string department_, int entryHour_, int exitHour_){
	name = name_;
	age = age_;
	id = id_;
	department = department_;
	entryHour = entryHour_;
	exitHour = exitHour_;
}
  
string Admin::getDepartment() {
	return department;
};

void Admin::setDepartment(string department) {
	department = department;	
};
    
int Admin::getEntryHour() {
	return entryHour;
};

void Admin::setEntryHour(int entryHour_) {
	entryHour = entryHour_;	
};

int Admin::getExitHour() {
	return exitHour;
};

void Admin::setExitHour(int exitHour_) {
	exitHour = exitHour_;	
};

string Admin::getInfo(){
	string text = "Name: "+name+"\nAge:"+to_string(age)+"\nId: "+to_string(id)+"\nDuties: Manages "+department+" during "+to_string(entryHour)+" to "+to_string(exitHour);
	return text;
};
