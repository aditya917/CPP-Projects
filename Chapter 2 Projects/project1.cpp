#include <iostream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double itemCost;
    int yearsFromNow;
    double rateOfInflation;

    cout << "How much does the item cost right now? ";
    cin >> itemCost;
    
    cout << "How many years from now will the item be purchased? ";
    cin >> yearsFromNow;

    cout << "How much is the inflation rate? (enter percentage) ";
    cin >> rateOfInflation;
    rateOfInflation/=100;
    

    for(int i = 0; i<yearsFromNow; i++){
        itemCost = itemCost+(itemCost*rateOfInflation);
    }
    cout << "Item Cost " << itemCost;

    
    return 0;
}