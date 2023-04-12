#include<iostream>

using namespace std;

int main()
{
    int userGuess;
    int SecretNum = 30;
    int guessCount = 0;
    int guessLimit = 4;
    bool outOfGuesses = false;

    while(userGuess != SecretNum && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Guess the Number: ";
            cin >> userGuess;
            if(userGuess != SecretNum){
                guessCount++;
                cout << guessCount << " /4" << endl;
                cout << "Try Again\n";
                if(guessCount >= guessLimit){
                    cout << "Your out of Guesses\n";
                }else{
                    cout<<"";
                }
            }else{
                cout <<"";
            }

            }else{
                outOfGuesses = true;
            }
        }
        if(outOfGuesses){
            cout << "You Lose!";
        }else{
            cout << "You Win";
        }

        return 0;

    }
