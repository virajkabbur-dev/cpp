#include <iostream>
#include <string>

using namespace std;

int main() {
    int teaCups = 5;

    while (teaCups > 0)
    {
        teaCups--;
        cout << "Serving cup of tea " << teaCups << " remaining \n";
    }
    
    cout << "All tea cups are served \n";
    
    return 0;

}