#include<iostream>

int main(){

    char c1, c2, c3, c4, c5;

    std::cout << "Enter 5 letters: ";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
    std::cout << "ACSII message : " << int(c1) << " " << int(c2) << " "<< int(c3) << " " 
    << int(c4) << " " << int(c5);

    return 0;
}