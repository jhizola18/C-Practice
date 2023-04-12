#include<iostream>

using namespace std;

int main(){

    int age = 19;
    int *pAge = &age;
    
    cout << age << endl;
    cout << &age << endl;
    cout << *pAge;
    

    
    return 0;
}