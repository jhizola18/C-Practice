#include <iostream>

using namespace std;

int main()
{
    string characterName = "Tom";
    int characterAge;
    characterAge = 35;
    
    cout << "There once was a man named " << characterName <<endl;
    cout << "He was " << characterAge << "years old"<< endl;
    cout << "He like the name " << characterName << endl;
    
    
    characterName = "Mike";
    characterAge = 59;
    cout << "He like the name " << characterName <<endl;
    cout << "But did not like being " << characterAge << endl;



    return 0;
}