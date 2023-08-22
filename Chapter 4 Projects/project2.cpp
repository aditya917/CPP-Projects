#include <iostream>
#include <math.h>
using namespace std;

void triangle(int a, int b, int c, double& area, int& perimeter);
int main(){
    double area;
    int perimeter;
    triangle(3,4,5,area,perimeter);
    return 0;
}
void triangle(int a, int b, int c, double& area, int& perimeter){
    double semiperimeter;
    while((a+b)>c ||(b+c)>a || (a+c)>b){
        perimeter = a+b+c;
        semiperimeter = perimeter/2;
        area = sqrt((semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c)));
        cout << "Semiperimeter: " << semiperimeter << endl;
        cout << "Area: " << area << endl;
        break;
    }
}