#ifndef ADMIN.H
#define ADMIN.H

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
    	string getDepartment();
		int getEntryHour();
		int getExitHour();
		void setDepartment(string);
		void setEntryHour(int);
		void setEntryHour(int);
		string getInfo();
		Admin();
		Admin(string, int, int, string, int, int);
};  

#endif
