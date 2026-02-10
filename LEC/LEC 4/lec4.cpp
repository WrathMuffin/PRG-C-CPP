#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct A
{
    int b; 
    int c;
};

struct EmployeeRecord
{
    double wage;
    int vacation;
    char status;
};

class DayofYear
{
    public:
        void input();
        void output();
        void set(int m, int d);
        
    private:
        int month;
        int day;
};

int main() 
{
    int listChar[5] = {'a', 'b', 'c', 'd', 'e'};
    int listNum[5] = {1, 2, 3, 4, 5};

    int *p;
    p = &listNum[0];
    
    for (int i = 0; i < 5; i++) 
    {
        cout << *(p + i) << endl;
    }

    A x;
    x.b = 1;
    x.c = 2;

    DayofYear date;
    cout << "Enter your date\n";
    date.input();

    cout << "Your date\n";
    date.output();

    return 0;
}

void DayofYear::input()
{
    cout << "Day: \n";
    cin >> day;
    
    cout << "Month: \n";
    cin >> month;
}

void DayofYear::output()
{
    cout << "Month: " << month << "\nDay: " << day << endl;
}

void DayofYear::set(int m, int d)
{
    month = m;
    day = d;
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