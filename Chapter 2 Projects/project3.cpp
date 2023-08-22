#include <iostream>
using namespace std;

int main(){
    int dollars;
    int chocolates;
    int leftoverCoupons=0;
    cout << "Dollars: ";
    cin >> dollars;
    chocolates = dollars;
    int i;
    for(i=1; i<chocolates+1; i++){
        if(i%7==0){
            chocolates++;
            leftoverCoupons++;
        }
    }
    

    cout << "You can buy " << chocolates << " bars " << "and " << leftoverCoupons-1 << " leftover coupons." << endl;
    return 0;
}