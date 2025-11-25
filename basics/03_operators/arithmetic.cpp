#include <iostream>

using namespace std;


// int chai(int teaPack, int pricePerPack); 

int chai(){

    int teaPack, pricePerPack, totalPrice;

    cout << "Enter number of tea packs - " << endl;
    cin >> teaPack;

    cout << "Enter price per tea pack - " << endl;
    cin >> pricePerPack;

    totalPrice = teaPack * pricePerPack;
    totalPrice = totalPrice + (totalPrice * 0.10);

    return totalPrice;
}

int main(){

    int result = chai();
    cout << "Result is - " << result << endl;

    
    //challenge 1 - arithmetic operators

    int teaCups, pricePerCup, totalPrice, discountPrice;

    cout << "Enter number of tea cups - " << endl;
    cin >> teaCups;

    cout << "Enter price per cup - " << endl;
    cin >> pricePerCup;

    totalPrice = teaCups * pricePerCup;

    if (totalPrice > 300) {
        discountPrice = totalPrice - (totalPrice*0.05);
        cout << "Total price post discount of 5% = " << discountPrice << endl;
    }
    else {
        cout << "Total price = " << totalPrice << endl;
    }

    return 0;


}




