#include <iostream>

using namespace std;

int main()
{
    string word = "Justine Academy";
    string phrasesub;
    phrasesub = word.substr(8, 3);

    cout << phrasesub << endl;
    cout << word.length() << endl;//checking the length of a string
    cout << word.find("Aca", 0) << endl;//find function is finding a specific words or letter in a string
    word[5] = 't';//indexing is for the program to get and call a specific character and able to alter it
    cout << word << endl;
    cout << word.substr(8, 3);//subsr function is to extract words from a string
    return 0;
}