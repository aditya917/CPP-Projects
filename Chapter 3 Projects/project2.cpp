#include <iostream>
using namespace std;

void calculateInflationRate(int requests);

int main(){
    int requests;
    cout << "How many times do you want to run this program? ";
    cin >> requests;
    calculateInflationRate(requests);
    return 0;
}

void calculateInflationRate(int requests){
    double lastPrice;
    double currentPrice;
    double inflationRate;
    for(int i = 0; i< requests; i++){
        cout << "How much did a hot-dog cost last year? ";
        cin >> lastPrice;
        cout << "How much does a hot-dog cost now? ";
        cin >> currentPrice;
        inflationRate = (currentPrice-lastPrice)/lastPrice;
        cout << "The inflation rate is: " << inflationRate*100 << endl;
        cout << "The price after one year is: " << currentPrice*inflationRate << endl;
    }
}