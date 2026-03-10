#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std; 
int main() {
    srand(time(0)); 
    
    int secretNumber = rand() % 100 + 1;
    int guess; 

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100: "; 

    cin >> guess;

    if (guess == secretNumber) { 
        cout << "Correct! You guessed it!" << endl; 
    } else { 
        cout << "Wrong! The number was " << secretNumber << endl;
    }
    return 0;
    }