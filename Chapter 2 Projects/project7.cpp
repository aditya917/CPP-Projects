#include <iostream>
using namespace std;

int main(){
     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
    cout.precision(2);

    int numberOfExercises;
    int totalPoints=0;
    int scoresReceieved=0;
    int points;
    int tPoints;
    double percentage;

    cout << "How many exercises to input? ";
    cin >> numberOfExercises;

    for(int i=1; i<numberOfExercises+1; i++){
        cout << "Scores recieved for exercise " << i << " ";
        cin >> points;
        scoresReceieved += points;

        cout << "Total points possible for exercise " << i << " ";
        cin >> tPoints;
        totalPoints += tPoints;
    }

    percentage = ((scoresReceieved*1.0/totalPoints)*100);

    cout << "Your total is " << scoresReceieved << " out of " << totalPoints << ", or " << percentage << "%";
    return 0;
}