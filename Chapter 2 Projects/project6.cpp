#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double weight;
    double radius;
    const double gamma = 62.4;
    double buoyantForce;

    cout << "What is the weight of the object? ";
    cin >> weight;

    cout << "What is the radius of the sphere? ";
    cin >> radius;

    buoyantForce = gamma * ((4/3)*3.14*(pow(radius,3)));

    if(buoyantForce >= weight){
        cout << "The sphere will float." << endl;
    }
    else{
        cout << "The sphere will sink." << endl;
    }

    return 0;
}