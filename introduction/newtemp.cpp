#include<iostream>
#include<cmath>

using namespace std;


double KelvtoCel(double userTemp)
{
    double result;
    result = userTemp - 273.15;
    

    return result; 
}

double CeltoKelv(double userTemp)
{
    double result;
    result = userTemp + 273.15;
    

    return result; 
}

double FahrentoKelv(double userTemp)
{
    double result;
    result = (userTemp - 32) * 5/9 + 273.15;
   

    return result; 
}

double kelvintoFahren(double userTemp)
{
    double result;
    result = (userTemp - 273.15)*1.8+32;
    

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

    double result;

    if(ChoiceUnit == '1' && Unitmeasure == "Fahrenheit"){
        result = FahrentoKelv(userTemp);
        result = KelvtoCel(result);
        cout << "Result: " << result << " C";

    }else if(ChoiceUnit == '2' && Unitmeasure == "Celsius"){
        result = CeltoKelv(userTemp);
        result = kelvintoFahren(result);
        //result = kelvintoFahren(CeltoKelv(userTemp));
        cout << "Result: " << result << " K";
    }else if(ChoiceUnit == '3' && Unitmeasure == "Celsius"){
        
        result = CeltoKelv(userTemp);
        cout << "Result: " << result << " K";
    }else if(ChoiceUnit == '1' && Unitmeasure == "Kelvin"){
        result = KelvtoCel(userTemp);
        cout << "Result: " << result << " C";
    }else if(ChoiceUnit == '2' && Unitmeasure == "Kelvin"){
        result = kelvintoFahren(userTemp);
        cout << "Result: " << result << " F";
    }else if(ChoiceUnit == '3' && Unitmeasure == "Fahrenheit"){
        result = FahrentoKelv(userTemp);
        cout << "Result: " << result << " K";

    }else{
        cout << "Unconvertable!!";
    }
    


    
return 0;
}