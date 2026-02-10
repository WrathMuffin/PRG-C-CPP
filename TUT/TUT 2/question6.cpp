#include <iostream>

using namespace std;

int main() {
    cout << "Prime numbers between 3 and 100 are:" << endl;

    // 1. Outer Loop: Iterate through every number from 3 to 100
    for (int n = 3; n <= 100; n++) {
        
        bool isPrime = true; 

        // 2. Inner Loop: Check if n is divisible by any number between 2 and n-1
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                // If n is divisible by i, it is NOT a prime number
                isPrime = false;
                break;
            }
        }

        // If the inner loop finishes and isPrime is still true, the number is prime
        if (isPrime) {
            cout << n << " ";
        }
    }

    cout << endl; // Final newline for clean output
    return 0;
}