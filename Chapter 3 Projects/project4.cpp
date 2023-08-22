#include <iostream>
using namespace std;

const double uGravitationalConstant = 6.673e-8;
void gravitationalAttractionForce(double mass1, double mass2, double distance);
int main(){
    int requests;
    double mass1;
    double mass2;
    double distance;
    cout << "How many times do you want to calculate? ";
    cin >> requests;
    for(int i=0; i<requests; i++){
        cout << "What is the mass of the first object? ";
        cin >> mass1;
        cout << "What is mass of the second object? ";
        cin >> mass2;
        cout << "What is the distance between these objects? ";
        cin >> distance;
        cout << "The gravitation attraction force is : "; 
        gravitationalAttractionForce(mass1, mass2, distance);
    }
    return 0;
}

void gravitationalAttractionForce(double mass1, double mass2, double distance){
    double force = uGravitationalConstant * ((mass1 * mass2)/(distance * distance));

    cout << "The gravitatonal attraction force is " << force << endl;

}