#include<iostream>
#include<cstring>

using namespace std;

int FactorialNumber(int num){
  
  
  int fact = 1;
  
  for(int i = num; i > 1; i--){
    fact = fact * i;
    
    
    
  }
  
  
}

int main(){

  int num;
  

  cout << "Enter a Number: ";
  cin >> num;
  cout << "The Factorial is: " <<FactorialNumber(num);

  return 0;
}