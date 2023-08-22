#include <iostream>
using namespace std;

void product(int first, int second, int third);

int main(){
    int first;
    int second;
    int third;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;
    product(first, second, third);
    return 0;
}
void product(int first, int second, int third){
    cout << first*second*third;
}