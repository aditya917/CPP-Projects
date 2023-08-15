#include <iostream>
using namespace std;

int main(){
    int feet;
    int inches;
    int weight;

    cout << "How many feet tall are you? ";
    cin >> feet;

    cout << "How many inches tall are you?";
    cin >> inches;

    inches = inches + (feet*12);

    if(inches > 60){
        weight = 110+((inches-60)*5);
    }

    cout << "Your ideal bodyweight is " << weight << " pounds.";
    

    return 0;
}