#include <iostream>
using namespace std;

/* Sample solution for baseball game requirement */

int main() {
    int team1Score = 0, team2Score = 0; // Initialize scores for both teams
    int team1Runs, team2Runs;           // Variables to store runs in each inning
    int innings = 9;                    // Standard innings
    bool gameTied = false;

    // Collect runs for the first 9 innings
    for (int i = 1; i <= innings; ++i) {
        cout << "Inning " << i << ": Enter runs scored by Team 1: ";
        cin >> team1Runs;
        cout << "Inning " << i << ": Enter runs scored by Team 2: ";
        cin >> team2Runs;

        team1Score += team1Runs;
        team2Score += team2Runs;
    }

    // Check if game is tied after 9 innings
    if (team1Score == team2Score) {
        cout << "Game tied after 9 innings. Proceeding to extra innings.\n";
        gameTied = true;
    }

    // Allow up to 3 extra innings if the game is tied
    for (int i = 1; gameTied && i <= 3; ++i) {
        cout << "Extra Inning " << i << ": Enter runs scored by Team 1: ";
        cin >> team1Runs;
        cout << "Extra Inning " << i << ": Enter runs scored by Team 2: ";
        cin >> team2Runs;

        team1Score += team1Runs;
        team2Score += team2Runs;

        if (team1Score != team2Score) { // Check if tie is broken
            gameTied = false;
        }
    }

    // Display final score
    cout << "\nFinal Score:\n";
    cout << "Team 1: " << team1Score << "\n";
    cout << "Team 2: " << team2Score << "\n";

    // Determine and display winner
    if (team1Score > team2Score) {
        cout << "Team 1 wins!\n";
    } else if (team2Score > team1Score) {
        cout << "Team 2 wins!\n";
    } else {
        cout << "The game is a tie after extra innings.\n";
    }

    return 0;
}
