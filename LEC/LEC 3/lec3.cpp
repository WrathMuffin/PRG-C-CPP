#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    /*
    void showTheWorld(const int a[]);
    
    int arr[] = {1, 2, 3, 4, 5};
    showTheWorld(arr);
    */

    /*
    // PROBLEM 6
    int yourArray[20];//, sixSevenArray[67];
    
    cout << "Enter your 20 numbers: \n";
    for (int i = 0; i < 20; i++)
    {
        cin >> yourArray[i];
    }
    
    cout << "The numbers you entered are: ";
    for (int i = 0; i < 20; i++)
    {
        cout << yourArray[i] << " " << endl;;
    }
    
    // 67 GENERATEUR
    int sixSeven;
    
    cout << "67 yeyeeyeyeyey 67 67: \n";
    cin >> sixSeven;
    
    cout << "67 \n" << endl;;
    do
    {
        cout << "67 " << endl;;
    } 
    while (sixSeven = 67);
    
    return 0;
    */

    // PROBLEM 7
    /*
    type int uses two bytes of memories
    array 0 would take up 2, so teh adresses are: 1000, 1001
    array 1: 1002, 1003
    array 2: 1004, 1005
    so dress of array 3 woudl be: 1006, 1007
    */

    // ARRAYS
    // SELECTION SORT

    cout << "\nSelection Sort:\n";

    int smallestSS;
    int arrSS[] = {5, 2, 9, 1, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        smallestSS = i;

        for (int j = i + 1; j < 6; j++)
        {
            if (arrSS[j] < arrSS[smallestSS])
            {
                smallestSS = j;
                
                // swap
                int temp = arrSS[i];
                
                arrSS[i] = arrSS[smallestSS];
                arrSS[smallestSS] = temp;
            }
        }

        cout << arrSS[i] << " ";
    }

    // BUBBLE SORT

    cout << "\nBubble Sort:\n";

    int arrBS[] = {1, 36, 500, 2, 60, 7};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            // swap if curreeent value is biggeer than next value
            if (arrBS[j] > arrBS[j + 1])
            {
                
                // do swap usign a temproary varble
                int temp = arrBS[j];
                
                arrBS[j] = arrBS[j + 1];
                arrBS[j + 1] = temp;
            }
        }

        cout << arrBS[i] << " ";
    }
}

/* 
void showTheWorld(const int a[])
//Precondition: sizeOfa is the declared size of the array a.
//All indexed variables of a have been given values.
//Postcondition: The values in a have been written to the screen.
{
    int sizeOfa = sizeof(a); // get the size of the array
    cout << "The array contains the following values:\n";
    
    for (int i = 0; i < sizeOfa; i++)
    cout << a[i] << " ";
    cout << endl;
}
*/