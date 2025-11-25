#include <iostream>

using namespace std;

void chai() {
    int teaCups; 
    bool isMemberFor1Year;

    cout << "Enter number of tea cups - \n";
    cin >> teaCups;

    cout << "Are you a member for one year? \n";
    cin >> isMemberFor1Year;

    if (teaCups > 12 || isMemberFor1Year){
        cout << "You recieve a discount on your tea subscription service \n";
    }
    else{
        cout << "You do not get a discount \n";
    }
}


int main(){

    chai();


    int teaCups;

    cout << "How many tea cups would you like to buy - " << endl;
    cin >> teaCups;

    if (teaCups > 20){
        cout << "You have been offered a Gold Badge";
    }
    else if (teaCups >= 10){
        cout << "You have been offered a Silver Badge";
    }
    else {
        cout << "No badges for you";
    }
}