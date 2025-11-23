#include <iostream>
#include <string>

using namespace std;

int main(){

    //challenge 1

    string teaType = "Darjeeling";
    float teaPricePerKg = 127.99;
    char teaRating = 'A';

    //challenge 2

    float teaPrice;

    cout << "Enter base tea price - ";
    cin >> teaPrice;

    int taxedTeaPrice = (int) teaPrice + teaPrice/10;

    cout << "Price of tea after 10% tax - " << taxedTeaPrice << endl;

    return 0;

    //challenge 3

    string favouriteTea;
    int teaQuantity;

    cout << "Which is your favourite tea? \n";
    getline(cin, favouriteTea);

    cout << "How many cups of " << favouriteTea << " tea would you like to have? \n";
    cin >> teaQuantity; //getline does not work with int

    cout << "Your tea order - " << favouriteTea << " tea" << endl << "Qauntity -" <<  teaQuantity << endl;


}