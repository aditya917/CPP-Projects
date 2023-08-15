#include <iostream>
using namespace std;

int main(){
    const int MAXIUMUM_CAPACITY = 100;
    uint64_t totalPeople;

    cout << "Number of people entering meeting: ";
    cin >> totalPeople;

    if(totalPeople > MAXIUMUM_CAPACITY){
        cout << "This meeting cannot be held." << endl;
        cout << "Please remove " << totalPeople - MAXIUMUM_CAPACITY << " people in order to hold this meeting.";
    }
    else{
        cout << "This meeting can be held!" << endl;
        cout << (MAXIUMUM_CAPACITY - totalPeople) << " more people can fit in this meeting." <<endl;
    }
    return 0;
}