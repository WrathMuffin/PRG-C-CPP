#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int Factorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 

    else 
    {
        // n is multitpled by the next number 
        // wwhich is n reduced by 1 each time
        return n * Factorial(n - 1); 
    }
}

void StarFactorial(int n) 
{
    if (n == 0) 
    {
        return;
    } 

    else
    {
        for (int i = 0; i < n; i++) 
        {
            cout << "*";
        }
        
        StarFactorial(n - 1);
    }
}

void BackwardNumbers(int n)
{
    if (n == 0) 
    {
        return;
    } 

    else 
    {
        cout << n % 10 << " ";
        BackwardNumbers(n/10);
    }
}

void BinarySearch(int arr[], int size, int target)
{
    int middle = 0;

    for (int i = 0; i < size; i++) 
    {
        middle = arr[size / 2];
        
        if (middle != target) 
        {
            if (target < middle) 
            {
                size = size / 2;
            } 

            else 
            {
                arr = arr + size / 2;
                size = size / 2;
            }
        }

        else
        {
            cout << "The number has been identified at position " << size / 2 << endl;
            break;
        }
    }
}

int main() 
{
    int n;
    int inputAction = 0;
    
    while (inputAction != 67)
    {
        cout << "\n+-------------------------------+\n" << endl;
        cout << "Enter problem number:\n1 => Factorial\n2 => Theres no problem for this...\n3 => Star Factorial\n4 => Backward Numbers\n67 => Exit\n\nYour choice: ";
        cin >> inputAction;
        
        switch (inputAction)
        {
        case 1:
        cout << "\n+-------------------------------+\n" << endl;
        cout << "PROBLEM #1: Find the Factorial\nEnter an int for n: ";
            cin >> n;

            cout << "Factorial of " << n << " is: " << Factorial(n) << endl;
            break;

            case 2:
            cout << "\n+-------------------------------+\n" << endl;
            cout << "PROBLEM #2: The Problemless Problem\nTHERE IS NO PROBLEM REEEEEEEEEEEEEEEEEEE 67676767";
            break;

        case 3:
            cout << "\n+-------------------------------+\n" << endl;
            cout << "PROBLEM #3: Starry Factorial Night\nEnter an int for n: "; 
            cin >> n;

            StarFactorial(n);
            break;
            
        case 4:
            cout << "\n+-------------------------------+\n" << endl;
            cout << "PROBLEM #4: Reversus Numerus\nEnter an int for n: ";
            cin >> n;

            BackwardNumbers(n);
            break; 

        case 5:
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int size = sizeof(arr) / sizeof(arr[0]);
        
            cout << "\n+-------------------------------+\n" << endl;
            cout << "PROBLEM #5: Binary Search\nEnter an int to search for: ";
            cin >> n;

            BinarySearch(arr, size, n);
            break;

        case 67:
            cout << "\n+-------------------------------+\n" << endl;
            cout << "EXIT PROGRAM" << endl;
            break;
        }
    }
    
    return 0;
}