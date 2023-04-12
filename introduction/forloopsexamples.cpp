#include<iostream>

using namespace std;

int main()
{
    string daysOfWeek[] = {"Monday","Tuesday","Wednesday"};
    for(int i = 0; i < 3; i++ )
    {
        
        cout << "Days: " << daysOfWeek[i] << endl;
        for(int j = 1; j <= 24; j++){
            cout << "Hours: " << j << endl;

        }

    }
    return 0;
}