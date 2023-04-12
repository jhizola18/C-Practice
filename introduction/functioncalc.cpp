#include<iostream>

using namespace std;

void addition(int num1, int num2){
    int result;
    result = num1 + num2;

    cout << "The answer is: " << result;

    
}



int main(){

    int num1, num2;
    char op;

    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter a Number: ";
    cin >> num2;
    cout << "Enter an Operand: ";
    cin >> op;

    if(op == '+'){
        addition(num1, num2);

    }else{
        cout << "Fawke you";
    }

    return 0;
}