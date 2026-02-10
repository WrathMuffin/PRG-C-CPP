#include <iostream>
#include <iomanip> // Required for controlling output formatting

using namespace std;

// Define Global Constants
const double METERS_PER_FOOT = 0.3048;
const double INCHES_PER_FOOT = 12.0;
const double CM_PER_METER = 100.0;

// Uses Pass by Reference (&) to modify variables declared in the main function
void inputLength(int& feet, double& inches) {
    cout << "Enter the length in feet: ";
    cin >> feet;
    cout << "Enter the length in inches: ";
    cin >> inches;
}

// Input: feet, inches
// Output: meters, centimeter
void calculateConversion(int feet, double inches, int& meters, double& centimeters) {
    // Step A: Convert the entire length into "Total Feet"
    double totalFeet = feet + (inches / INCHES_PER_FOOT);

    // Step B: Convert the total feet into "Total Meters"
    double totalMeters = totalFeet * METERS_PER_FOOT;

    // Step C: Extract the integer portion for meters
    // Type casting to int removes the decimal portion
    meters = (int)totalMeters; 

    // (Total meters - integer meters) gives the fractional part; multiply by 100 for cm
    double remainingMeters = totalMeters - meters;
    centimeters = remainingMeters * CM_PER_METER;
}

// 3. Output Function
void outputResult(int feet, double inches, int meters, double centimeters) {
    // Set output to fixed-point notation with 2 decimal places
    cout << fixed << setprecision(2); 
    cout << feet << " feet and " << inches << " inches corresponds to:" << endl;
    cout << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main() {
    int feet, meters;
    double inches, centimeters;
    char choice;

    do {
        inputLength(feet, inches);

        calculateConversion(feet, inches, meters, centimeters);

        outputResult(feet, inches, meters, centimeters);

        cout << "--------------------------------------------------" << endl;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}