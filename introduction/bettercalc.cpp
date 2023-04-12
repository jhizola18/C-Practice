#include<iostream>

using namespace std;



int main(){

    int num1, num2;
    char operand;

    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter a Number: ";
    cin >> num2;
    cout << "Enter an operand: ";
    cin >> operand;

    int result;

    if(operand == '+'){
        result = num1 + num2;
    } else if(operand == '-'){
        result =num1 - num2;
    } else if(operand == '*'){
        result = num1 * num2;
    } else if(operand == '/'){
        result = num1 / num2;
    } else {
        cout << "You are bullshit";
    }
    
    cout << "Answer is: " << result;



    return 0;
}