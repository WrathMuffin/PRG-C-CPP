#include <iostream>

using namespace std;

// 1. Define Global Constant
// 6.673 x 10^-8 is represented in C++ scientific notation as 6.673e-8.
const double G = 6.673e-8;

// 2. Function Definition
double calculateForce(double m1, double m2, double d) {
    // Apply the formula F = (G * m1 * m2) / (d^2)
    return (G * m1 * m2) / (d * d);
}

int main() {
    double mass1, mass2, distance, force;
    char choice; // Variable to store user's choice to continue or stop (y/n)

    // 3. Loop for repeated execution
    do {
        // Read user inputs
        cout << "Enter the mass of the first body (in grams): ";
        cin >> mass1;
        
        cout << "Enter the mass of the second body (in grams): ";
        cin >> mass2;
        
        cout << "Enter the distance between them (in cm): ";
        cin >> distance;

        // Call the function to perform the calculation
        force = calculateForce(mass1, mass2, distance);

        // Output the results
        cout << "The gravitational force is: " << force << " dynes." << endl;
        cout << "--------------------------------------------------" << endl;

        // Ask the user if they want to repeat the process
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Continue if input is 'y' or 'Y'

    cout << "Goodbye!" << endl;

    return 0;
}