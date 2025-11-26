#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaTypes[5] = {"Orange Tea", "Lemon Tea", "Green Tea", "Black Tea", "Oolong Tea"};

    for (int i = 0; i < 5; i++)
    {   
        if (teaTypes[i] == "Green Tea"){
            cout << "Skipping " << teaTypes[i] << endl;
            continue;
        }

        cout << "Brewing " << teaTypes[i] << endl;
    }
    
    return 0;

}