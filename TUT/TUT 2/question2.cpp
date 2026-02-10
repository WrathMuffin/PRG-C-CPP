#include <iostream>

using namespace std;

int main() {
    const double SWEETENER_CONCENTRATION = 0.001;

    double mouseLethalAmount; 
    double mouseWeight;       
    double dieterTargetWeight;
    
    // 1. input
    cout << "Please enter the amount of sweetener that caused the mouse's death.: ";
    cin >> mouseLethalAmount;

    cout << "Please enter the mouse's weight.: ";
    cin >> mouseWeight;

    cout << "Please enter the dieter's target weight: ";
    cin >> dieterTargetWeight;

    // 2. caculate
    // step A: Calculate the lethal dose ratio
    double lethalRatio = mouseLethalAmount / mouseWeight;

    // step B: Calculate the lethal total amount of artificial sweeteners for this human's body weight
    double humanLethalSweetenerAmount = lethalRatio * dieterTargetWeight;

    // step C: caculate how many soda can kill people
    // 
    double maxSafeSodaAmount = humanLethalSweetenerAmount / SWEETENER_CONCENTRATION;

    // 3. output
    cout << "--------------------------------------------------" << endl;
    cout << " the maximum total amount of soda a dieter can consume is: " << endl;
    cout << maxSafeSodaAmount << endl;
    

    return 0;
}