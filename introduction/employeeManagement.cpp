#include<iostream>
using namespace std;



class Employee
{
    
    private:
        string NameofEmployee;
        int EmployeeID;
        string FirstDayOfWork;
        int PhoneNumberOfEmploy;
        string Address;
        int WorkHours;
        long salary;
    public:
        void Create_Employee();

    
    };

void Create_Employee(){
        string NameofEmployee; 
        int EmployeeID; 
        string FirstDayOfWork; 
        int PhoneNumberOfEmploy; 
        string Address; 
        int WorkHours; 
        long salary;
        cout << "Input Employee's Name: ";
        getline(cin,NameofEmployee);
        cout << "Input Employee's ID: ";
        cin >> EmployeeID;
        cout << "Starting Day: ";
        cin >> FirstDayOfWork;
        cout << "Phone Number: ";
        cin >> PhoneNumberOfEmploy;
        cout << "Address: ";
        getline(cin,  Address);
        cout << "Work Hours: ";
        cin >> WorkHours;
        cout << "Salary";
        cin >> salary;
        
        
    };



    

    


int main(){

    Employee Employees;
    
    Employees.Create_Employee();
    return 0;
}