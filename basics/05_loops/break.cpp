#include <iostream>
#include <string>

using namespace std;

int main() {

    string response;

    while (true)
    {
        cout << "Do you want more tea? (type 'stop' to exit) \n";
        cin >> response;

        if (response == "stop"){
            //exit the loop
            break;
        }

        cout << "Here is another cup of tea... \n";
    }
    
    cout << "No more tea for you...\n";

    return 0;

}