#include <iostream>
#include <string>

using namespace std;

int totalChaiServed(int arr[], int size){
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total;
    
}

int main() {

    int arrOfChai[5] = {78, 91, 54, 32, 99};
    int size = 5;

    int result = totalChaiServed(arrOfChai, size);
    cout << "Total Chai Served - " << result << endl;

    int chaiTemperature[5] = {34,42,28,42,35};

    for (int i = 0; i < 5; i++)
    {
        cout << chaiTemperature[i] << "\n";
    }

     for (int i = 1; i <= 5; i++)
    {
        cout << chaiTemperature[i] << "\n";
    }
    

    return 0;

}