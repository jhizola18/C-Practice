#include<iostream>
#include<cmath>

using namespace std;

//fahrenheit to celsius = (fahren - 32) * 0.5556

double FahrentoCelConv(double userTemp)
{
    double result;
    result = (userTemp - 32) * 0.5556;
    cout << "Result: " << result << " C";

    return result;

}
//celsius to fahrenheit = (celsius x 1.8) + 32
double CeltoFahrenConv(double userTemp)
{
    double result;
    result = (userTemp * 1.8 ) + 32;
    cout << "Result: " << result << " F";

    return result;

}

double KelvtoCel(double userTemp)
{
    double result;
    result = userTemp - 273.15;
    cout << "Result: " << result << " C";

    return result; 
}

double CeltoKelv(double userTemp)
{
    double result;
    result = userTemp + 273.15;
    cout << "Result: " << result << " K";

    return result; 
}

double FahrentoKelv(double userTemp)
{
    double result;
    result = (userTemp - 32) * (5/9) + 273.15;
    cout << "Result: " << result << " K";

    return result; 
}

double kelvintoFahren(double userTemp)
{
    double result;
    result = (userTemp - 273.15)*1.8+32;
    cout << "Result: " << result << " F";

    return result; 
}

int main()
{
    double userTemp;
    char ChoiceUnit;
    string Unitmeasure;

    cout << "Enter a Temp: \n";
    cin >> userTemp;
    cout << "Celsius or Fahrenheit or Kelvin: \n";
    cin >> Unitmeasure;
    cout << "Convert to 1.Celsius 2.Fahrenheit 3.Kelvin\n";
    cin >> ChoiceUnit;

    if(ChoiceUnit == '1' && Unitmeasure == "Fahrenheit"){
         FahrentoCelConv(userTemp);



    }else if(ChoiceUnit == '2' && Unitmeasure == "Celsius"){
        CeltoFahrenConv(userTemp);
    }else if(ChoiceUnit == '3' && Unitmeasure == "Celsius"){
        CeltoKelv(userTemp);
    }else if(ChoiceUnit == '1' && Unitmeasure == "Kelvin"){
        KelvtoCel(userTemp);
    }else if(ChoiceUnit == '2' && Unitmeasure == "Kelvin"){
        kelvintoFahren(userTemp);
    }else if(ChoiceUnit == '3' && Unitmeasure == "Fahrenheit"){
        FahrentoKelv(userTemp);

    }else{
        cout << "Unconvertable!!";
    }
    


    
return 0;
}