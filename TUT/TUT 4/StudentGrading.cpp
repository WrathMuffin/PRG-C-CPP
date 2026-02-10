#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    int quiz1, quiz2, midtermExam, finalExam;

    cout << "Enter quiz 1 score: ";
    cin >> quiz1;
    cout << "Enter quiz 2 score: ";
    cin >> quiz2;
    cout << "Enter midterm exam score: ";
    cin >> midtermExam;
    cout << "Enter final exam score: ";
    cin >> finalExam;

    double quizWeighted = ((quiz1 + quiz2) / 2) * 0.25f;
    double midtermWeighted = midtermExam * 0.25f;
    double finalWeighted = finalExam * 0.50f;
    double average = quizWeighted + midtermWeighted + finalWeighted;

    cout << "Quizzes (25%): " << quizWeighted << endl;
    cout << "Midterm exam (25%): " << midtermWeighted << endl;
    cout << "Final exam (50%): " << finalWeighted << endl;
    cout << "Overall grade percentage: " << average << endl;

    if (average >= 90) { cout << "Grade: A" << endl;} 
    
    else if (average >= 80) { cout << "Grade: B" << endl; } 
    
    else if (average >= 70) { cout << "Grade: C" << endl; } 
    
    else if (average >= 60) { cout << "Grade: D" << endl; }

    else { cout << "Grade: F" << endl; }

    return 0;
}