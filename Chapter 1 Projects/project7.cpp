#include <iostream>
using namespace std;

int main(){
    int kilograms;
    int mets;
    int minutes;

    cout << "How much do you weigh in pounds? ";
    cin >> kilograms;

    kilograms/=2.2;

    cout << "How many METS for your activity? ";
    cin >> mets;

    cout << "How much time do you spend on this activity? ";
    cin >> minutes;

    cout << "The total number of calories burned is " << minutes*(0.0175*mets*kilograms) << endl;
    return 0;
}