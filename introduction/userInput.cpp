#include<iostream>

using namespace std;

int main()
{
    int age;
    string name;
    cout << "What is your Name: \n";
    getline(cin, name);
    cout << "You are " << name << endl;
    cout << "Put in your Age: ";
    cin >> age;
    cout << "You are " << age << " years old"; 



    return 0;
}