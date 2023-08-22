#include <iostream>
using namespace std;

bool even(int number);
int main(){
    cout << even(4) << endl;
    return 0;
}
bool even(int number){
    bool b;
    if(number%2 ==0){
        b = true;
    }
    else{
        b = false;
    }
    return b;
}