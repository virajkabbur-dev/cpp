#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaType;

    cout << "What kind of tea would you like to have? \n";
    getline(cin, teaType);

    if (teaType == "Green Tea"){
        cout << "Your order has been confirmed \n";
    }
    else {
        cout << "Order again please \n";
    }
}