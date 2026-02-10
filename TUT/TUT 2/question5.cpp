#include <iostream>

using namespace std;

int main() {

    long long totalSeconds; 
    int hours, minutes, seconds;

    cout << "enter total seconds: ";
    cin >> totalSeconds;

    // Because the variable is an integer, the decimal part is automatically discarded (Integer Division).
    hours = totalSeconds / 3600;

    long long remainingSeconds = totalSeconds % 3600;

    minutes = remainingSeconds / 60;

    seconds = remainingSeconds % 60;

    cout << "--------------------------------------------------" << endl;
    cout << totalSeconds << " seconds equals: " << endl;
    cout << hours << " hours, " 
         << minutes << " minutes, and " 
         << seconds << " seconds." << endl;

    return 0;
}