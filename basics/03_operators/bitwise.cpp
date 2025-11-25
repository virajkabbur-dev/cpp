#include <iostream>

using namespace std; 

int main(){

    int userInput;

    int green = 1;
    int black = 2;
    int oolong = 4;

    int stock = 6;

    cout << "Enter (1 - green | 2 - black | 4 - oolong) to check tea availability - \n";
    cin >> userInput;

    cout << (userInput & stock);

    if (userInput & stock){
        cout << "Tea is available in stock";
    }
    else {
        cout << "Tea is not available in stock";
    }
}
