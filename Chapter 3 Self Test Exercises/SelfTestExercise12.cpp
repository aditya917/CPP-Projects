#include <iostream>
using namespace std;

bool inOrder(int first, int second, int third);
int main(){
    cout << inOrder(3, 2, 1);
    return 0;
}

bool inOrder(int first, int second, int third){
    bool b;
    if(second < first || third < second ||  third < first){
        b= false;
    }
    else{
        b=true;
    }
    return b;
}
