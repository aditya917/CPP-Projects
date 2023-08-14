#include <iostream>
using namespace std;

int main(){
    const double ARTIFICIAL_SWEETENER = 0.001;

    double amountToKillMouse;
    double weightOfMouse;
    double weightOfDieterStopping;
    double amountToKillHuman;

    double dietSodas;

    cout << "Artificial mouse needed to kill a mouse: ";
    cin >> amountToKillMouse;

    cout << "Weight of the mouse: ";
    cin >> weightOfMouse;

    cout << "Weight of the dieter stopping: ";
    cin >> weightOfDieterStopping;

    amountToKillHuman = (weightOfDieterStopping*amountToKillMouse)/weightOfMouse;

    dietSodas = amountToKillHuman/ARTIFICIAL_SWEETENER;

    cout << "It would take " << dietSodas << " to kill a human." << endl;

    return 0;
}