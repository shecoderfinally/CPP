#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int secretNum =7;
    int guess,guessCount,guessLimit;
    guessCount=0;
    guessLimit=5;
    bool outofGuesses =false;

    cout << "Enter a number: ";
    cin >> guess;

    while(guess !=secretNum && !outofGuesses)
    {
        if(guessCount < guessLimit)
        {
            cout << "Wrong!! \nTry Again!" << endl;
            cin >> guess;
            guessCount++;
        }
        else
        {
            outofGuesses =true;
        }

    }
    if(outofGuesses)
    {
        cout << "You are out of guesses!";
    }
    else
    {
        cout << "You guessed correctly!";
    }

    return 0;
}

