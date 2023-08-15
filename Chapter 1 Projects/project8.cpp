#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    double n;
    double r;
    double guess;
    cout << "Please pick a number: ";
    cin >> n;
    guess = n/2;
    for(int i = 0; i<5; i++){
        r=n/guess;
        guess = (guess+r)/2;
    }
    cout << "The guess is " << guess;

    return 0;
}