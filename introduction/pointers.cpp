#include<iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;// variable for pointers basically, you can store the memory of the variable inside this pointer variable
    double gpa = 2.7;
    double *Pgpa = &gpa;
    string name = "Lebron";
    string *Pname = &name;


    cout << pAge << endl;//referencing the address variable
    cout << *pAge << endl;// derefencing the address of  the variable
    cout << *&name;//dereferencing the addressed variable
    cout << &*&name;//referencing again the address variable

    return 0;
}