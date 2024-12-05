#include <iostream>
#include <string>
using namespace std;

// Sample solution for Guess Number Game 

int main() {
    string secretCode = "53840"; // The secret 5-digit code
    const int maxAttempts = 5;  // Number of attempts allowed
    int attempts = 0;           // Counter for attempts
    string userGuess;           // User's guess

    cout << "Welcome to the Code Guessing Game!\n";
    cout << "You have " << maxAttempts << " attempts to guess the 5-digit secret code.\n";

    while (attempts < maxAttempts) {
        cout << "Attempt " << (attempts + 1) << ": Enter your 5-digit guess: ";
        cin >> userGuess;

        if (userGuess.length() != 5) {
            cout << "Invalid input. Please enter exactly 5 digits.\n";
            continue;
        }

        int correctPositions = 0; // Count of correct positions
        int sumCorrectDigits = 0; // Sum of digits in correct positions

        // Compare each digit
        for (int i = 0; i < 5; ++i) {
            if (userGuess[i] == secretCode[i]) {
                correctPositions++;
                sumCorrectDigits += userGuess[i] - '0'; // Convert char to int
            }
        }

        // Display results for this guess
        cout << "Digits in correct position: " << correctPositions << "\n";
        cout << "Sum of correct digits: " << sumCorrectDigits << "\n";

        // Check if user guessed correctly
        if (correctPositions == 5) {
            cout << "Congratulations! You've guessed the secret code!\n";
            break;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "You've used all your attempts. The secret code was: " << secretCode << "\n";
    }

    return 0;
}
