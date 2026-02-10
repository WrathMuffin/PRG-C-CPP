#include <iostream>

using namespace std;

int main() {
    //constant: How many ounces are in one metric ton
    const double OUNCES_PER_METRIC_TON = 35273.92;

    double packageWeightInOunces; 
    double weightInMetricTons;    
    double boxesNeeded;           

    // 1. input
    cout << "Please enter the weight of the cereal box (ounces):";
    cin >> packageWeightInOunces;

    // 2. caculate
    // 
    weightInMetricTons = packageWeightInOunces / OUNCES_PER_METRIC_TON;

    // Calculate the number of boxes required to fill one metric ton.
    boxesNeeded = OUNCES_PER_METRIC_TON / packageWeightInOunces;

    // 3. output
    cout << "--------------------------------------------------" << endl;
    cout << "The weight of the cereal packaging (metric tons): " << weightInMetricTons << endl;
    cout << "need " << boxesNeeded << " of boxes to fill one metric ton." << endl;

    return 0;
}