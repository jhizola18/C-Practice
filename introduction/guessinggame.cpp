#include<iostream>

using namespace std;

int main(){

    int secretNum = 24;
    int guessLimit = 3;
    int guess;
    int guessCount = 0;
    bool outOfGuesses = false;

   do{
        if(guessCount < guessLimit){
            cout <<"Guess the Number: ";
            cin >> guess;
            if(guess != secretNum){
                guessCount++;
                cout << guessCount << " / 3" <<  endl;
                cout << "Try Again " << endl;
                
                if(guessCount >= guessLimit){
                    cout<<"Ouf of Guesses" << endl;
                }else{
                    cout<< "";
                }
        
            

            } else{
                cout << "";

            }
            
            
        } else {
            outOfGuesses = true;
        }

   }while(guess != secretNum && !outOfGuesses);

   if(outOfGuesses){
    cout << "You Lose!";

   }else{
    cout << "You Win";
   }
    


    return 0;
}