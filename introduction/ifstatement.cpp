#include<iostream>

using namespace std;

int main(){

    bool isMale = true;
    bool isTall = false;

    // || OR condition is to check if one variable is true to pass the statement

    if(isMale && isTall){
        cout << "You are a tall male";

    } else if(isMale && !isTall){
        cout << "You are not a tall male";
    } else if(!isMale && isTall){
        cout << "You are tall but not male";
    }  else{
        cout << "You are not male nor tall";
    }



    return 0;
}