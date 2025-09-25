#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    srand(time(0));  // Seed random number generator
    int secretNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" << endl;

    // Loop until the correct number is guessed
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " 
                 << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
