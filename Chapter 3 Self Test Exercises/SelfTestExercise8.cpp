#include <iostream>
using namespace std;

int sum(int first, int second, int third);
int main(){
    cout << sum(1,2,3) << endl;
    return 0;
}
int sum(int first, int second, int third){
    return (first+second+third);
}