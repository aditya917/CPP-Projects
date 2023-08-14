#include <iostream>
using namespace std;

int main(){
    int firstNumber;
    int secondNumber;

    cout << "Please enter the first number: ";
    cin >> firstNumber;
    cout << "\n";

    cout << "Please enter the second number: ";
    cin >> secondNumber;
    cout << "\n";

    cout << "These two numbers divided by each other are " << (secondNumber/firstNumber) << "\n";
    cout << "with a remainder of " << (secondNumber%firstNumber);


    return 0;
}

