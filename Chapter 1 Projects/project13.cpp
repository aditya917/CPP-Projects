#include <iostream>
using namespace std;

int main(){
    const double LETHAL_OVERDOSE = 10000;
    double caffeineAmount;

    cout << "How much caffeine in this drink? (mg) ";
    cin >> caffeineAmount;

    cout << "It would take " << LETHAL_OVERDOSE/caffeineAmount << " drinks to kill you." << endl;
    return 0;
}

