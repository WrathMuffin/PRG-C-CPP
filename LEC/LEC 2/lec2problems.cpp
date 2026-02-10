#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int func13(int a, int b, int c);
int func16(int a, int b, int c);

int main() 
{
    /*
    int n = 2;
    int valueProduced = 2*(n++);
    cout << valueProduced << "\n";
    cout << n << "\n";
    */
    
    // PROBLEM 1
    cout << "PROBLEM 1\n" << endl;
    
    int varA     ;   //= 5;
    string varB  ;   //= "10";
    char varC    ;   //= 'c';
    float varD   ;   //= 20.05f;
    double varE  ;   //= 10.67;

    cout << "Int var, " << varA << "!" << endl;
    cout << "String var, " << varB << "!" << endl;
    cout << "Char var, " << varC << "!" << endl;
    cout << "Float var, " << varD << "!" << endl;
    cout << "Double var, " << varE << "!\n" << endl;

    // PROBLEM 2
    cout << "PROBLEM 2\n" << endl;

    int resultA, resultB, resultC, resultD;
    int x, y, z;

    cout << "Enter for x: ";
    cin >> x;

    cout << "Enter for y: ";
    cin >> y;

    cout << "Enter for z: ";
    cin >> z;

    resultA = 3 * x;
    resultB = 4 * x + y;
    resultC = (x + y) / 7;
    resultD = (3 * x + y)/(z + 2); // i havent see the equation for this one

    cout << "\n Result A, " << resultA << "!" << endl;
    cout << "Result B, " << resultB << "!" << endl;
    cout << "Result C, " << resultC << "!" << endl;
    cout << "Result D, " << resultD << "!\n" << endl;


    // PROBLEM 3
    cout << "PROBLEM 3\n" << endl;

    char a = 'b', b = 'c', c = a;
    cout << "Confusing chars: " << a << b << c << 'c' << "\n" << endl;


    // PROBLEM 4
    cout << "PROBLEM 4\n" << endl;
    
    int var1, var2;
    int finalResult, remainder;

    cout << "Enter two integers: ";
    cin >> var1 >> var2;

    finalResult = var1 / var2;
    remainder = var1 % var2;

    cout << "Final Result, " << finalResult << "!" << endl;
    cout << "Remainder, " << remainder << "!\n" << endl;

    // PROBLEM 67
    cout << "PROBLEM 67\n" << endl;

    cout.setf(ios::fixed); // sets fixed-point notation
    cout.setf(ios::showpoint); // ensures decimal point is shown
    cout.precision(3); // sets decimal places to 3

    // PROBLEM 7
    cout << "PROBLEM 7\n" << endl;

    // \n to move to new line, \t to add tab space
    cout << 'A' << "\n" << 'B' << "\t" << 'C' << endl;
    cout << "" << endl; // blank line since i dont want it to confuse with the problem from pputting \n on C

    // PROBLEM 10
    cout << "PROBLEM 10\n" << endl;

    double 
    xa = 1.5, ya = 2.5,
    area = 50, fudge = 20;

    double 
    q10a = sqrt(xa + ya), // square root of (xa + ya)
    q10b = pow(xa, ya + 7), // xa raised to the power of (ya + 7)
    q10c = sqrt(area + fudge); // square root of (area + fudge)
    
    // PROBLEM 13
    cout << "PROBLEM 13\n" << endl;
    //int func13(int a, int b, int c);
    int result13 = func13(6, 7, 9);
    
    cout << "Sum is: " << result13 << "!\n" << endl;
    
    // PROBLEM 16
    
    cout << "PROBLEM 16\n" << endl;
    //int func16(int a, int b, int c);
    int result16 = func16(1, 2, 3);
    
    cout << "Result using problem 13's func is: " << result16 << "!\n" << endl;
    
    return 0;
}

// PROBLEM 13 FUNCTION
int func13(int a, int b, int c) 
{
    return (a + b + c);
}

// PROBLEM 16 FUNCTION
int func16(int a, int b, int c) 
{
    //int func16Result = func13(a, b, c);

    return (func13(a, b, c) / 2);
}