#include <iostream>
#include <string>

using namespace std;

int main(){
    string userStatus;
    int teaCups;

    cout << "Enter your status (student or not) - " << endl;
    getline(cin,userStatus);

    cout << "Enter number of tea cups - ";
    cin >> teaCups;

    if (userStatus == "student" || teaCups > 15){
        cout << "You get a 15% discount on your tea subscription" << endl;
    }
    else {
        cout << "Unfortunately you don't receive any discount";
    }

}