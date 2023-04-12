#include<iostream>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;


    }

    return result;

}

int main()
{
    int num1, numPow;

    cout << "Enter a Base Number: ";
    cin >> num1;
    cout << "Enter a Exponent: ";
    cin >> numPow;
    cout << "The Answer is: " << power(num1,numPow);


    return 0;   
}