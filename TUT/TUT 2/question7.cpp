#include <iostream>

using namespace std;

int main() {
    // The problem requires starting the search from 100 degrees Celsius
    int celsius = 100;
    int fahrenheit;

    // Calculate the initial Fahrenheit to check the condition for the while loop
    fahrenheit = (9 * celsius) / 5 + 32;

    cout << "Starting search from 100 degrees..." << endl;

    // 2. Search Loop
    while (celsius != fahrenheit) {
        celsius--; 
        
        fahrenheit = (9 * celsius) / 5 + 32;
    }

    // 3. Output Result
    cout << "--------------------------------------------------" << endl;
    cout << "Found it! The temperature is the same at: " << endl;
    cout << celsius << " degrees." << endl;

    return 0;
}