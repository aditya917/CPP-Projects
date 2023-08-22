#include <iostream>
using namespace std;

double hatSize(double height, double weight);
double jacketSize(double height, double weight, int age);
double waistSize(double height, double weight, int age);

int main(){

    return 0;
}
double hatSize(double height, double weight){
    double hatSize = (weight/height)*2.9;
    return hatSize;
}
double jacketSize(double height, double weight, int age){
    double jacketSize = (height*weight)/288;
    int remainder = (age-30)%10;
    for(int i =0; i < remainder; i++){
        jacketSize += (1/8);
    }
    cout << "Jacket Size: " << jacketSize;
}
double waistSize(double height, double weight, int age){

}