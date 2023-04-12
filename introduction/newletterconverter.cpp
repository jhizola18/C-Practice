#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){

    char lowerCase[100];
    char upperCase;
    
    cout << "Enter a lowered case string: ";
    cin.getline(lowerCase, 100);
    
    
    for(int i = 0; i < strlen(lowerCase); i++){
        upperCase = toupper(lowerCase[i]);
        cout << upperCase;
    }
    
    return 0;
}