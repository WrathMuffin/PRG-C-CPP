#include <iostream>

using namespace std;

int main() {
    // 1. Define Constant: Pay increase rate of 7.6%
    const double PAY_INCREASE_RATE = 0.076;

    double previousAnnualSalary; 
    double newAnnualSalary;      
    double newMonthlySalary;     
    double retroactivePay;       

    // 2. Read input
    cout << "Enter previous annual salary: ";
    cin >> previousAnnualSalary;

    // 3. Perform calculations
    
    // Calculate the old monthly salary first for convenience
    double oldMonthlySalary = previousAnnualSalary / 12.0;
    
    // Amount of pay increase per month
    double monthlyIncreaseAmount = oldMonthlySalary * PAY_INCREASE_RATE;

    // A. Calculate Retroactive Pay
    // Retroactive for 6 months, so multiply the monthly increase by 6
    retroactivePay = monthlyIncreaseAmount * 6.0;

    // B. Calculate New Annual Salary
    // Method 1: Previous Salary * (1 + Rate)
    // Method 2: Previous Salary + (Previous Salary * Rate)
    newAnnualSalary = previousAnnualSalary * (1.0 + PAY_INCREASE_RATE);

    // C. Calculate New Monthly Salary
    newMonthlySalary = newAnnualSalary / 12.0;

    // 4. Output results
    cout << "--------------------------------------------------" << endl;
    cout << "Retroactive pay due (6 months): " << retroactivePay << endl;
    cout << "New annual salary: " << newAnnualSalary << endl;
    cout << "New monthly salary: " << newMonthlySalary << endl;

    return 0;
}