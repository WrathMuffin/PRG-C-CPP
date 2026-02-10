#include <iostream>
#include <iomanip> // Required for controlling decimal precision in output (setprecision)

using namespace std;

int main() {
    // 1. Define Constants
    const double HOURLY_RATE = 16.78;
    const double OVERTIME_RATE = 1.5;     // Overtime multiplier
    const double SS_TAX_RATE = 0.06;      // Social Security tax rate
    const double FED_TAX_RATE = 0.14;     // Federal income tax rate
    const double STATE_TAX_RATE = 0.05;   // State income tax rate
    const double UNION_DUES = 10.00;      // Union dues
    const double EXTRA_HEALTH_COST = 35.00;// Extra health insurance cost
    const int STD_HOURS = 40;             // Standard work hours per week

    // Variable Declaration
    double hoursWorked;
    int numDependents;
    double grossPay, ssTax, fedTax, stateTax, healthInsurance = 0.0;
    double netPay;

    // 2. Read Input
    cout << "Enter the number of hours worked in a week: ";
    cin >> hoursWorked;

    cout << "Enter the number of dependents: ";
    cin >> numDependents;

    // 3. Calculate Gross Pay - Handle Overtime Logic
    if (hoursWorked > STD_HOURS) {
        // Case: Employee worked overtime
        double regularPay = STD_HOURS * HOURLY_RATE;
        double overtimeHours = hoursWorked - STD_HOURS;
        double overtimePay = overtimeHours * HOURLY_RATE * OVERTIME_RATE;
        grossPay = regularPay + overtimePay;
    } else {
        // Case: Employee did not work overtime
        grossPay = hoursWorked * HOURLY_RATE;
    }

    // 4. Calculate Tax Amounts
    ssTax = grossPay * SS_TAX_RATE;
    fedTax = grossPay * FED_TAX_RATE;
    stateTax = grossPay * STATE_TAX_RATE;

    // 5. Determine if Extra Health Insurance Cost applies
    if (numDependents >= 3) {
        healthInsurance = EXTRA_HEALTH_COST;
    } 
    // If dependents < 3, healthInsurance remains at the initial value of 0.0

    // 6. Calculate Net Take-Home Pay
    // Net Pay = Gross Pay - (SS Tax + Federal Tax + State Tax + Union Dues + Health Insurance)
    netPay = grossPay - (ssTax + fedTax + stateTax + UNION_DUES + healthInsurance);

    // 7. Output Results
    cout << fixed << setprecision(2); // Set output format to 2 decimal places
    cout << "-----------------------------------" << endl;
    cout << "Gross Pay:           $" << grossPay << endl;
    cout << "Social Security Tax: $" << ssTax << endl;
    cout << "Federal Income Tax:  $" << fedTax << endl;
    cout << "State Income Tax:    $" << stateTax << endl;
    cout << "Union Dues:          $" << UNION_DUES << endl;
    cout << "Health Insurance:    $" << healthInsurance << endl;
    cout << "Net Take-Home Pay:   $" << netPay << endl;

    return 0;
}