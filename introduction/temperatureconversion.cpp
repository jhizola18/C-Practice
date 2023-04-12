#include<iostream>
#include<cmath>

using namespace std;
//fahrenheit to celsius = (fahren - 32) * 0.5556
//celsius to fahrenheit = (celsius x 1.8) + 32
int main()
{
 double userTemp;
 char Choice;
 

cout << "Enter a Temp: \n";
cin >> userTemp;
cout << "Conver to 1.Celsius 2.Fahrenheit\n";
cin >> Choice;

double result;
switch(Choice){
    case '1':
    result = (userTemp - 32) * 0.5556;
    cout << "Result: " << result << " C";
    break;
    case '2':
    result = (userTemp * 1.8 ) + 32;
    cout << "Result: " << result << " F";
    break;
    default:
    cout << "Wrong Input!";
    break;

}

return 0;
}