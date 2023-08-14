#include <iostream>
using namespace std;

int main(){
    const double metricTon = 35273.92;
    double breakfastCerealOunces;
    int cerealBoxes;

    cout << "Enter the weight of breakfast cereal in ounces: ";
    cin >> breakfastCerealOunces;
    cout << endl;

    cout << "The weight of the breakfast cereal in metric tons is " << (breakfastCerealOunces/metricTon) << endl;

    cerealBoxes = (metricTon/breakfastCerealOunces) +1;

    cout << "The number of boxes needed to yield one metric ton of cereal is " << cerealBoxes << ".";

    return 0;
}