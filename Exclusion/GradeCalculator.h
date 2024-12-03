#include <iostream>
#include <iomanip> // For fixed and setprecision
using namespace std;

// Sample solution for calcuating Student grade percentage and alerts

int main() {
    int numExercises;
    double totalScore = 0.0, totalPoints = 0.0;

    cout << "Enter the number of classroom exercises: ";
    cin >> numExercises;

    for (int i = 1; i <= numExercises; ++i) {
        double score, points;

        cout << "Exercise " << i << " - Enter score earned: ";
        cin >> score;

        cout << "Exercise " << i << " - Enter total points possible: ";
        cin >> points;

        // Add to totals
        totalScore += score;
        totalPoints += points;

        // Check individual performance
        if (score < 0.5 * points) {
            cout << "Alert: Score for Exercise " << i << " is below 50% of the total points.\n";
        }

        // Check accumulated performance
        double cumulativeAverage = (totalScore / totalPoints) * 100;
        if (cumulativeAverage < 70) {
            cout << "Alert: Accumulated average is below 70%.\n";
        }
    }

    // Calculate and display final results
    double overallPercentage = (totalScore / totalPoints) * 100;

    cout << fixed << setprecision(2); // Format to 2 decimal places
    cout << "\nTotal score earned: " << totalScore << "\n";
    cout << "Total points possible: " << totalPoints << "\n";
    cout << "Overall percentage: " << overallPercentage << "%\n";

    // Final alert
    if (overallPercentage < 70) {
        cout << "Final Alert: Your overall performance is below 70%.\n";
    }

    return 0;
}
