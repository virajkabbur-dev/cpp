#include <iostream>
#include <string>

using namespace std;

int main() {

    int teaCups;

    cout << "Enter number of tea cups - \n";
    cin >> teaCups;

    if (teaCups > 20){
        cout << "You have recieved 20% discount \n";
    }
    else if (teaCups >= 10 && teaCups <= 20){
        cout << "You have recieved 10% discount \n";
    }
    else {
        cout << "No discount for you";
    }
    
    return 0;

}