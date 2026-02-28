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
    cout << "*";

    StarFactorial(n - 1);
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
        BackwardNumbers(n / 10);
    }
}

void BinarySearch(int arr[], int high, int low, int target)
{
    int middle;
    middle = (low + high) / 2;

    // no numebr found
    if (low > high)
    {
        cout << "Your number isn't in array! Try again!" << endl;
        return;
    }

    if (arr[middle] == target)
    {
        cout << "The number has been identified at position " << middle << endl;
        return;
    }

    // search on left side
    else if (target < arr[middle])
    {
        // this would shift high to the leeft side from midle
        high = middle - 1;
        BinarySearch(arr, high, low, target);
    }

    // search righte side
    else if (target > arr[middle])
    {
        // shist the new low to teh right of middle
        low = middle + 1;
        BinarySearch(arr, high, low, target);
    }

    else
    {
        cout << "Something happended! Try again...?" << endl;
        return;
    }
}

int main()
{
    int n,
        inputAction = 0,

        arr[] = {-3, 1, 3, 5, 6, 7, 10, 13, 34, 67},
        size = sizeof(arr) / sizeof(arr[0]),
        high = size - 1,
        low = 0;

    while (inputAction != 67)
    {
        cout << "\n+-------------------------------+\n\nEnter problem number:\n1 => The Factorial of...\n2 => Hip Hip Hurray\n3 => Starry Factorial Night\n4 => Reversus Numerus\n5 => Binary Search in a Pre-sorted Array\n67 => Exit Program\n\nYour choice => ";
        cin >> inputAction;

        switch (inputAction)
        {
        case 1:
            cout << "\n+-------------------------------+\n\nPROBLEM #1: The Factorial of...\nEnter an int for n => ";
            cin >> n;

            cout << "Factorial of " << n << " is: " << Factorial(n) << endl;
            break;

        case 2:
            cout << "\n+-------------------------------+\n\nPROBLEM #2: Hip Hip Hurray\nHIP HIP HURRAY";
            break;

        case 3:
            cout << "\n+-------------------------------+\n\nPROBLEM #3: Starry Factorial Night\nEnter an int for n => ";
            cin >> n;

            StarFactorial(n);
            break;

        case 4:
            cout << "\n+-------------------------------+\n\nPROBLEM #4: Reversus Numerus\nEnter an int for n => ";
            cin >> n;

            BackwardNumbers(n);
            break;

        case 5:
            cout << "\n+-------------------------------+\n\nPROBLEM #5: Binary Search in a Pre-sorted Array\nEnter an int to search for => ";
            cin >> n;

            BinarySearch(arr, high, low, n);
            break;

        case 67:
            cout << "\n+-------------------------------+\n\nEXIT PROGRAM...\n";
            break;
        }
    }

    return 0;
}