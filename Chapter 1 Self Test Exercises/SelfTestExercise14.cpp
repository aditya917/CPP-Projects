#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName;
    string lastName;
    int age;

    cout << "Enter your first and last name." << endl;
    cin >> firstName >> lastName;

    cout << "Enter your age." << endl;
    cin >> age;

    cout << "You are " << age << " years old, " << firstName << " " << lastName << endl;


    
    return 0;
}
