#include <iostream>
#include <string>

using namespace std;

int main() {

    //lambda function

    auto preparedChai = [](int teaCups){
        cout << "Preparing " << teaCups << " teas" << endl; 
    };

    preparedChai(5);

    return 0;

}