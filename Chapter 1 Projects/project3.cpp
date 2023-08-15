#include <iostream>
using namespace std;

int main(){
    const double PAY_INCREASE = 0.076;
    double prevAnnualSalary;
    double newAnnualSalary;
    double newMonthlySalary;

    cout << "Please enter your previous annual salary: ";
    cin >> prevAnnualSalary;

    cout << "Retroactive pay for 6th months: " << (prevAnnualSalary / 2) * (PAY_INCREASE + 1) << endl;

    newAnnualSalary = (prevAnnualSalary)*(PAY_INCREASE+1);
    newMonthlySalary = newAnnualSalary/12;
    cout << "New annual salary: " << (newAnnualSalary) << endl;
    cout << "New monthly salary: " << (newMonthlySalary) << endl;
    return 0;
}