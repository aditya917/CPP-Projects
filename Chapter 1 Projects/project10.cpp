#include <iostream>
using namespace std;

int main(){
    int time;
    const int acceleration = 32;

    cout << "Please enter a time for the equation: ";
    cin >> time;

    cout << "Distance: " << 0.5*acceleration*(time*time);
    return 0;
}