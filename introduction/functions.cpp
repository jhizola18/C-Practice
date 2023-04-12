#include<iostream>


using namespace std;


void sayHello(string name, int age);


int main()
{
    sayHello("Leroy", 59);
    sayHello("jenkins", 49);
    sayHello("nigss", 579);

    return 0;

}

 void sayHello(string name, int age)
 {
    cout << "Hello " << name;
    cout << " you are " << age << " years old" << endl;
 }