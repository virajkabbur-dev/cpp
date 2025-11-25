#include <iostream>
#include <string>

using namespace std;

int main() {

    float currentTime;

    cout << "Enter current time (0-24) - \n";
    cin >> currentTime;

    if (currentTime >= 8 && currentTime <= 18){
        cout << "The shop is open \n";
    }
    else {
        cout << "the shop is closed \n";
    }

     return 0;

}