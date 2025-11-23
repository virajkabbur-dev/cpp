#include <iostream>

using namespace std;

int main(){
    
    float teaPrice = 49.99;
    int numberOfTea = 2;

    int totalTeaPrice = teaPrice * numberOfTea;

    int roundedTeaPrice = (int) teaPrice; //takes the floor value

    cout << totalTeaPrice <<endl;
    cout << roundedTeaPrice <<endl;

    return 0;
}