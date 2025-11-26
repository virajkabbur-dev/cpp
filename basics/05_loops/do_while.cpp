#include <iostream>
#include <string>

using namespace std;

int main() {

    string response;

    do
    {
        cout << "Do you want more tea ( yes, no ) - \n";
        getline(cin, response);
    } while (response == "yes" || response == "Yes");
    

    return 0;

}