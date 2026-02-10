#include <iostream>
#include <cmath> // Required for sqrt (square root) and pow (power) functions

using namespace std;

// 1. Helper Function: Calculates the mean (average) of four values
double calculateAverage(double s1, double s2, double s3, double s4) {
    return (s1 + s2 + s3 + s4) / 4.0;
}

// 2. Helper Function: Calculates the standard deviation (depends on the average)
// Formula: StdDev = sqrt( (Sum of (score - average)^2) / 4 )
double calculateStdDev(double s1, double s2, double s3, double s4, double average) {
    double sumOfSquares = 0.0;
    
    // Calculate the square of the difference between each score and the average
    sumOfSquares += pow((s1 - average), 2);
    sumOfSquares += pow((s2 - average), 2);
    sumOfSquares += pow((s3 - average), 2);
    sumOfSquares += pow((s4 - average), 2);
    
    // Calculate the variance (average of the squared differences)
    double variance = sumOfSquares / 4.0;
    
    // Return the square root of the variance
    return sqrt(variance);
}

// 3. Core Function: Uses 6 parameters to process and return results
// Note: 'avg' and 'sd' use '&' (Pass by Reference) to send results back to main
void computeStats(double s1, double s2, double s3, double s4, double& avg, double& sd) {
    // Call the first helper function to get the average
    avg = calculateAverage(s1, s2, s3, s4);
    
    // Call the second helper function to get the standard deviation
    sd = calculateStdDev(s1, s2, s3, s4, avg);
}

int main() {
    double score1, score2, score3, score4;
    double averageResult, stdDevResult;
    char choice;

    do {
        // Read user input
        cout << "Enter four scores: ";
        cin >> score1 >> score2 >> score3 >> score4;

        // Call the core function
        // We pass averageResult and stdDevResult by reference; the function modifies them directly
        computeStats(score1, score2, score3, score4, averageResult, stdDevResult);

        // Output the results
        cout << "Average: " << averageResult << endl;
        cout << "Standard Deviation: " << stdDevResult << endl;
        cout << "-----------------------------------" << endl;

        // Ask the user if they want to perform another calculation
        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}