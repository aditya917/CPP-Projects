#include <iostream>
using namespace std;

int main(){
    const int CANDY_BAR = 10;
    const int GUMBALL = 3;
    int numberOfCoupons;

    cout << "How many tickets have you won? ";
    cin >> numberOfCoupons;

    if(numberOfCoupons % CANDY_BAR > 3){
        cout << "You can buy " << numberOfCoupons/CANDY_BAR << " candy bars and " << (numberOfCoupons % CANDY_BAR)/3 << " gumballs.";
    }
    else{
        cout << "You can buy " << numberOfCoupons/CANDY_BAR << " candy bars and 0 gumballs";
    }

    return 0;
}