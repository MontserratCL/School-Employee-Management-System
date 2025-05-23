#include "Admin.h"
#include <string>
#include <vector>

using namespace std;
        
Admin::Admin(): name(""), age(0), id(0), department(""), entryHour(0), exitHour(0) {}

Admin::Admin(string name, int age, int id, string department, int entryHour, int exitHour)
    : name(name), id(id), age(age), department(department), entryHour(entryHour), exitHour(exitHour) {}
  
string Admin::getDepartment() {
	return department;
}

void Admin::setDepartment(string department) {
	department = department;	
}
    
int Admin::getEntryHour() {
	return entryHour;
}

void Admin::setEntryHour(int entryHour) {
	entryHour = entryHour;	
}

int Admin::getExitHour() {
	return exitHour;
}

void Admin::setExitHour(int exitHour) {
	exitHour = exitHour;	
}

string Admin::getInfo(){
	string text = "Name: "+name+"\nAge:"+age+"\nId: "+id+"\nDepartment: "+department+"\nOffice Hours: "+to_string(entryHour)+" : "+to_string(exitHour);
	return text;
}
