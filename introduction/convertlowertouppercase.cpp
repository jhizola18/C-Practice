#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){

    char lowerCase[100];
    char secondInput[100];
    char upperCase;
    
    cout << "Enter a lowered case string: ";
    cin >> lowerCase;
    
    
    
    for(int i = 0; i < strlen(lowerCase); i++){
        upperCase = toupper(lowerCase[i]);

        cout << upperCase;
        
    };
    cout << endl;
    
    char UpperCase;
    cout << "Enter a Second lowered string: ";
    cin >> secondInput;

    for(int j = 0; j < strlen(secondInput); j++){
        upperCase = toupper(secondInput[j]);

        cout << upperCase;
    }
    

    return 0;
}