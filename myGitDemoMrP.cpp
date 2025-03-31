#include <iostream>
using namespace std;

int main(){
    cout << "Greetings! " << endl;
    cout << "And Salutations!" << endl;
    cout << "What is your name so I can know you better? " << endl;
    string yourName;
    cin >> yourName;
    cout << "Greetings again, " << yourName << ", It's good to meet you!" << endl;
    return 0;
}