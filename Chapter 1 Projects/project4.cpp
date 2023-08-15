#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double consumerNeeds;
    double interestRate;
    double durationOfLoan;
    double monthlyPayment;
    double faceValue;

    cout << "How much money do you need to receive? ";
    cin >> consumerNeeds;

    cout << "What is the interest rate? ";
    cin>> interestRate;

    cout << "What is the duration of the loan? ";
    cin >> durationOfLoan;
    durationOfLoan/=12;

    

    faceValue = consumerNeeds/((1-(interestRate*durationOfLoan)));
    cout << "Face Value: " << faceValue <<endl;
    cout << "Monthly payment: " << (faceValue/12) << endl;

    



  
}