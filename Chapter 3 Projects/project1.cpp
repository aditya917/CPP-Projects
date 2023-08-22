#include <iostream>
using namespace std;

void conversion(int requests);
const double literToGallons = 0.264179;
int main(){
    int requests;
    cout << "How many times do you want to run this program? ";
    cin >> requests;
    conversion(requests);
    return 0;
}

void conversion(int requests){
    double liters;
    double gallons;
    double miles;
    for(int i = 0; i<requests; i++){
        cout << "How many liters has been consumed by your car? ";
        cin >> liters;
        cout << "How many miles has been traveled by your car? ";
        cin >> miles;
        gallons = liters*literToGallons;
        cout << "The number of miles per gallon is: " << miles/gallons;
    }
}