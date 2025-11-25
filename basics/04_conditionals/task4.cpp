#include <iostream>
#include <string>

using namespace std;

int main() {

    int userInput;

    cout << "Tell us which tea you want ( 1 - Green Tea | 2 - Oolong Tea | 3 - Black Tea ) - \n";
    cin >> userInput;

    switch (userInput)
    {
    case 1:
        cout << "Green Tea costs $2 \n";
        break;

    case 2:
        cout << "Oolong Tea costs $3 \n";
        break;
    case 3: 
        cout << "Black Tea costs $4 \n";
        break;
    default:
        cout << "Enter a valid response \n";
        break;
    }

    return 0;

}