#include <iostream>
using namespace std;

char signReport(double value);
int main(){
   cout << signReport(1);
    return 0;
}
char signReport(double value){
    char c;
    if(value > 0){
        c = 'P';
    }
    else{
        c= 'N';
    }
    return c;
}