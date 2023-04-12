#include<iostream>

using namespace std;

int main(){
    
    int num1, num2;
    char op;

    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter a Number: ";
    cin >> num2;
    cout << "Enter an Operand: ";
    cin >> op;



    int result;
    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Answer is: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Answer is: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Answer is: " << result;
            break;
        case '/':
            result = num1 / num2;
            cout << "Answer is: " << result;
            break;
        default:
             cout << "Fawke You";    
    }

    



    return 0;
}