#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaTypes[5] = {"Orange Tea", "Lemon Tea", "Green Tea", "Black Tea", "Oolong Tea"};

    for (int i = 0; i < 5; i++){
        cout << "Brewing " << teaTypes[i] << "... \n";

        for (int j = 1; j <= 3; j++){
            cout << "Serving " << j << " cup of tea...\n";
        }
        cout << "\n";
    }

    return 0;

}