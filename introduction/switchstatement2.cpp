#include<iostream>

using namespace std;



int addition(int num1, int num2){
    int result;
    result = num1 + num2;
    cout << "The Answer is: " << result;

    return result;
}

int subtraction(int num1, int num2){
    int result;
    result = num1 - num2;
    cout << "The Answer is: " << result;

    return result;

}

int multiplication(int num1, int num2){
    int result;
    result = num1 * num2;
    cout << "The Answer is: " << result;

    return result;
}

int division(int num1, int num2){
    int result;
    result = num1 * num2;
    cout << "The Answer is: " << result;

    return result;
}

void Mainmenu(int num1, int num2, char op){
    
    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter a Number: ";
    cin >> num2;
    cout << "Enter an Operand: ";
    cin >> op;


    

    switch(op){
        case '+':
        addition(num1, num2);
        break;

        case '-':
        subtraction(num1, num2);
        break;

        case '*':
        multiplication(num1, num2);
        break;

        case '/':
        division(num1, num2);
        break;

        default:
        cout << "Invalid";
        break;
    }

    

}



int main(){

    int num1,num2;
    char op;

    Mainmenu(num1,num2,op);



    return 0;




}

 