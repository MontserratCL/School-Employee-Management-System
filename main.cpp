
#include <iostream>
#include <vector>
#include <string>

#include "Record.cpp"
#include "Employee.cpp"
#include "Teacher.cpp"
#include "Admin.cpp"


using namespace std;

//---------------------------------------------------
//Auxiliar functions

Record start(){

    Teacher mario("Mario",14998,20,"Mathematics",7);
    Teacher christian("El Ingeniero",14999,32,"Engineering (Everything)",40);
    Admin maria("Mariana",26,14997,"Tec Services",7,20);
    Admin juan("Juanito Bodoque",42,14996,"Tec Salud",6,24);

    vector <Employee*> employees = {&mario,&christian,&maria,&juan};

    Record officialRecord = Record(employees);

    cout<<"Welcome to you Employee Record"<<endl;
    cout<<" "<<endl;
    cout<<"The current employees are: "<<endl;
    
    vector <Employee*> employe = officialRecord.getEmployee();
    cout<< employe.size() <<endl;


    for(int i=0; i<employe.size();i++){
        cout<<"----Employee Info----- "<<endl;
        cout<< (*employe[i]).getInfo()<<endl;
        cout<<" "<<endl;
    }
    return officialRecord;
};


int mainMenu(){
    int election;
    cout<<""<<endl;
    cout<<"---Main Menu----"<<endl;
    cout<<"Choose one of the following options:"<<endl;
    cout<<""<<endl;
    cout<<"1. Review all Employees."<<endl;
    cout<<"2. Add a new employee."<<endl;
    cout<<"3. Exit."<<endl;
    cout<<""<<endl;
    cout<<"Enter the chosen option number:"<<endl;
    cin>>election;
    cout<<""<<endl;
    return election;
};





/*main() method will contain the overall interactions with the user
with the support of other functions declared in the present file.*/
int main(){
    bool finish = false;
    Record official = start();
    int employees = 1500;

    while(finish == false){
        int decision = mainMenu();

        switch (decision) {
//----------------------------------------------------------------------
        case 1:{
            vector <Employee*> employees = official.getEmployee();

            cout<<" "<<endl;
            cout<<"Your current employees are: "<<endl;

            for(int i=0; i<employees.size();i++){
                //cout<<"----Employee Info----- "<<endl;
                //cout<<(employees[i])->getInfo()<<endl;
                cout<<" "<<endl;
            }

        }break;

//----------------------------------------------------------------------
        case 2:{
            int decision;
            cout<<" "<<endl;
            cout<<"Choose which option to add: "<<endl;
            cout<<"1. Teacher."<<endl;
            cout<<"2. Admin."<<endl;
            cin >>decision;
            cout<<" "<<endl;
            employees++;
            
            switch (decision)
            {
            case 1:{
                string name;
                int age;
                string subject;
                int hours;

                cout<<"Enter the Teacher's name: "<<endl;
                cin.ignore();
                getline(cin, name);
                cout<<""<<endl;

                cout<<"Enter the Teacher's age: "<<endl;
                cin>>age;
                cout<<""<<endl;

                cout<<"Enter the Teacher's subject: "<<endl;
                cin.ignore();
                getline(cin, subject);
                cout<<""<<endl;

                cout<<"Enter the Teacher's hours: "<<endl;
                cin>>hours;
                cout<<""<<endl;

                Teacher t(name,age,employees,subject,hours);
                official.addEmployee(&t);


            }break;

            case 2:{
                
                string name;
                int age;
                string department;
                int Entryhour;
                int exitHour;

                cout<<"Enter the Administrator's name: "<<endl;
                cin.ignore();
                getline(cin, name);
                cout<<""<<endl;

                cout<<"Enter the Administrator's age: "<<endl;
                cin>>age;
                cout<<""<<endl;

                cout<<"Enter the Administrator's department: "<<endl;
                cin.ignore();
                getline(cin, department);
                cout<<""<<endl;

                cout<<"Enter the Teacher's entry hour: "<<endl;
                cin>>Entryhour;
                cout<<""<<endl;

                cout<<"Enter the Teacher's exit hour: "<<endl;
                cin>>exitHour;
                cout<<""<<endl;

                Admin a(name,employees,age,department,Entryhour,exitHour);
                official.addEmployee(&a);

            }break;
            
            default:{
                cout<<"Invalid Option. Coming back to Main Menu."<<endl;
            }break;
            }

        }break;

//----------------------------------------------------------------------
        case 3:{
            cout<<""<<endl;
            cout<<"Have a good day!"<<endl;
            finish = true;
        }break;


        default:{
            cout<<"Invalid Option"<<endl;
        }break;

        }
    }
    return 0;
}