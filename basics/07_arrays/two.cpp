#include <iostream>
#include <string>

using namespace std;

//returning an array from a function

int* preparedChaiOrders (int cups){

    int* orders = new int[cups];

    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i * 10);
    }

    return orders;
    
}

int main() {

    int cups = 5;
    int* result = preparedChaiOrders(cups);

    for (int i = 0; i < cups; i++)
    {
        cout << result[i] << endl;
    }

    delete[] result;
    

    return 0;

}