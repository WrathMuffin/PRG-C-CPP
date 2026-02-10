#include <iostream>
#include <iomanip> // Used for output formatting (setw, etc.)

using namespace std;

int main() {
    // 1. Declare variables and arrays
    // The problem states there are fewer than 50 entries.
    const int MAX_SIZE = 50;
    int inputs[MAX_SIZE];
    int numInputs = 0;

    // Parallel arrays to store results:
    // distinctValues stores the unique number (N)
    // counts stores how many times that number appeared
    int distinctValues[MAX_SIZE];
    int counts[MAX_SIZE];
    int numDistinct = 0; // Tracks the number of unique elements found so far

    // 2. Read Input
    // We use a loop that reads integers until the user enters a non-integer (like 'q')
    cout << "Enter integers (type a non-integer like 'q' to stop): " << endl;
    while (numInputs < MAX_SIZE && cin >> inputs[numInputs]) {
        numInputs++;
    }

    // 3. Process Data: Count Frequencies
    for (int i = 0; i < numInputs; i++) {
        int currentVal = inputs[i];
        bool found = false;

        // Check if this number already exists in our distinctValues array
        for (int j = 0; j < numDistinct; j++) {
            if (distinctValues[j] == currentVal) {
                counts[j]++; // Found it! Increment the count
                found = true;
                break;       // Exit the inner loop
            }
        }

        // If the number was not found, add it as a new entry
        if (!found) {
            distinctValues[numDistinct] = currentVal;
            counts[numDistinct] = 1; // Initialize count to 1
            numDistinct++;           // Increase size of distinct list
        }
    }

    // 4. Sort Data: Descending Order by Value (N)
    // We use Bubble Sort to sort 'distinctValues' from largest to smallest.
    // IMPORTANT: When we swap values, we MUST also swap their corresponding counts.
    for (int i = 0; i < numDistinct - 1; i++) {
        for (int j = 0; j < numDistinct - i - 1; j++) {
            
            // Check if the current value is SMALLER than the next value.
            // If so, swap them (because we want Largest -> Smallest).
            if (distinctValues[j] < distinctValues[j + 1]) {
                
                // Swap the Values
                int tempVal = distinctValues[j];
                distinctValues[j] = distinctValues[j + 1];
                distinctValues[j + 1] = tempVal;

                // Swap the Counts (Keep them synchronized!)
                int tempCount = counts[j];
                counts[j] = counts[j + 1];
                counts[j + 1] = tempCount;
            }
        }
    }

    // 5. Output the results
    cout << "\nN\tCount" << endl; // \t is a tab character for alignment
    for (int i = 0; i < numDistinct; i++) {
        cout << distinctValues[i] << "\t" << counts[i] << endl;
    }

    return 0;
}