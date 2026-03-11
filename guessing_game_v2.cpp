#include <iostream> 
#include <cstdlib>
#include <ctime> 

using namespace std; 

int main() { 
    //seed random number generator 
    srand(time(0)); 

    //generate random number between 1 and 100 
    int secret = rand() % 100 + 1; 

    int guess = 0;
    int attempts = 0;

    cout << "Guess a number between 1 and 100\n";

    while (guess != secret) {
        cout << "Enter guess: ";
        cin >> guess;

        attempts++;

        if (guess > secret) {
            cout << "Too high!\n.";
        }
        else if (guess < secret) {
            cout << "Too low!\n.";
        }
        else { 
            cout << "Correct! You guessed it in "
            << attempts 
            << " tries.\n";
        }
    }
    return 0;
}