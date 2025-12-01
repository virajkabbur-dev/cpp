#include <iostream>
#include <string>

using namespace std;

int main() {

    int chaiSales[7][3] = {
        {12,31,34},
        {14,54,23},
        {75,43,68},
        {12,31,34},
        {14,54,23},
        {75,43,68},
        {12,13,14}
    };

    string week[7] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};

    for (int i = 0; i < 7; i++)
    {
        cout << week[i] << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << chaiSales[j][i] << "\n";
        }
        cout << "\n";
        
    }
    

    return 0;

}