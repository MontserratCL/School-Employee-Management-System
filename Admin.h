#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;


class Admin: public Employee {
    private: 
        string department;
        int entryHour;
        int exitHour;
        
    public:
    	Admin();
		Admin(string, int, int, string, int, int);	
		string getDepartment();
		int getEntryHour();
		int getExitHour();
		void setDepartment(string);
		void setEntryHour(int);
		void setExitHour(int);
		string getInfo() override;
		
};  

#endif
