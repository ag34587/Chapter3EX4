
#include <iostream>
using namespace std;

int main() {
    double replacementCost;
    double insuranceAmount;

    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    insuranceAmount = replacementCost * 0.80;

    cout << "The minimum amount of insurance that should be purchased is $" << insuranceAmount << endl;
}
