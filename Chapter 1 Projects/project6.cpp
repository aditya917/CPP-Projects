#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    const double WAGE = 16.78;
    const double SSTAX = 0.06;
    const double FIT = 0.14;
    const double SIT = 0.05;

    int hoursWorked;
    int numberOfDependents;
    double unionDues = 10;
    double grossPay;
    double takeHomePay;
    cout << "Hours worked: ";
    cin >> hoursWorked;

    //gross pay
    grossPay = hoursWorked * WAGE;
    cout << "Gross pay: " << grossPay << endl;

    //each withholding amount 
    cout << "Social Security Tax Deductible Amount: " << SSTAX*WAGE << endl;
    cout << "Federal Income Tax Deductible Amount: " << FIT*WAGE << endl;
    cout << "State Income Tax Deductible Amount: " << SIT*WAGE << endl;

    cout << "Number of Dependents: ";
    cin >> numberOfDependents;

    if(numberOfDependents >= 3){
        takeHomePay= grossPay - (SSTAX*WAGE) + (FIT*WAGE) + (SIT*WAGE) - 10 - 35;
        cout << "Take Home Pay: " << takeHomePay << endl;
    }
    else{
         takeHomePay= grossPay - (SSTAX*WAGE) + (FIT*WAGE) + (SIT*WAGE) - 10;
         cout << "Take Home Pay: " << takeHomePay << endl;
    }
    
    return 0;


}