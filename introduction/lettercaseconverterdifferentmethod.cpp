#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char lowerCase[100];
    char upperCase;

    cout << "Enter a lowercase string: ";
    cin.getline(lowerCase, 100);
    cout << "UpperCase: ";

    for(int i = 0; i < strlen(lowerCase); i++)
    {
        upperCase = toupper(lowerCase[i]);

        cout << upperCase;

    }





    return 0;
}