#include <iostream>
using namespace std;

int main(){
    int fahrenheit=212;
    int celsius=100;
    while(celsius != fahrenheit){
        celsius--;
        fahrenheit = ((9*celsius/5) + 32);
        
    }
    cout << "The temperature when both are the same is: " << celsius;
    return 0;
}