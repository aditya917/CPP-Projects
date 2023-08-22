#include <fstream>
#include <iostream>

using namespace std;

int main(){
    fstream inputStream;
    string text;
    string name;
    int score;
    int players;
    inputStream.open("scores.txt");
    
    inputStream >> players;

    for(int i=0; i<players; i++){
        inputStream >> name;
        inputStream >> score;
        cout << name << ", " << score << endl;
    }

    return 0;
}