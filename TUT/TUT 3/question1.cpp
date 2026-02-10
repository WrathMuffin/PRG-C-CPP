#include <iostream>
using namespace std;

// Function to delete repeated characters
// 'size' is passed by reference because the array size shrinks
void deleteRepeats(char a[], int& size) {
    for (int i = 0; i < size; i++) {
        // Check current char a[i] against all subsequent chars
        for (int j = i + 1; j < size; j++) {
            
            if (a[i] == a[j]) {
                // Found a duplicate at index j.
                // Shift everything from j+1 one position to the left
                for (int k = j; k < size - 1; k++) {
                    a[k] = a[k + 1];
                }
                
                size--; // Decrease the logical size of the array
                j--;    // Decrement j to check the new character that shifted into this spot
            }
        }
    }
}

int main() {
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'a';
    a[3] = 'c';
    int size = 4;

    cout << "Original array: ";
    for(int i=0; i<size; i++) cout << a[i] << " ";
    cout << endl;

    deleteRepeats(a, size);

    cout << "After deleting repeats: ";
    for(int i=0; i<size; i++) cout << a[i] << " ";
    cout << endl;
    cout << "New size: " << size << endl;

    return 0;
}