#include <iostream>
using namespace std;

int main(){
    int time;
    int hours;
    int minutes;
    int seconds;
    cout << "Please input the time: ";
    cin >> time;

    hours = time/3600;
    minutes = ((time-(hours*3600))/60);
    seconds = (time-((hours*3600)+(minutes*60)));

    cout << "The time broken down is " << hours << " hours " << minutes << " minutes " << seconds << " seconds";



    return 0;
}