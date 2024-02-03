#include <string>  // Don't forget to include this for using 'string' 
#include<iostream>
using namespace std;

class Employee {
private: 
    int id;
    string name;  // Use std::string instead of string
    double salary;

public:
    Employee(){
        id = 0;
        name = "";
        salary = 0;
    }
    Employee(int id, string name, double salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void readData();
    void displayData();

};

void Employee::readData() {
    cout << "Enter employee id: ";
    cin >> id;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee salary: ";
    cin >> salary;
}

void Employee::displayData() {
    
    cout << "Employee id: " << id << endl;
    cout << "Employee name: " << name << endl;
    cout << "Employee salary: " << salary << endl;
  
}


int main() {
    int  n;
    cout <<"Enter the no of employees:";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) {
        emp[i].readData();
    }

    for (int i = 0; i < n; i++)
    {
        emp[i].displayData();
    }
    



     return 0;
}