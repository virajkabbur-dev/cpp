#include <iostream>
#include <string>

using namespace std;

void chaiTracker(){
    int numberOfTeaBags;

    while (numberOfTeaBags > 0)
    {
        cout << "Enter number of tea bags - \n";
        cin >> numberOfTeaBags;
    }

    cout << "No tea bags left\n";
    
}

void addSugar (){

    string response;

    do
    {
        cout << "Do you want to add more sugar? \n";
        getline(cin, response);
    }
    while (response != "enough");

    cout << "No more sugar for you \n";

}

void totalTeaBatch(){

    int totalTea = 20;

    for (int i = 2; i <= totalTea; i+=2)
    {
        cout << i << endl;
    }
    
}

void teaChecker(){

     string teaTypes[6] = {"Orange Tea", "Lemon Tea", "Herbal Tea", "Black Tea", "Oolong Tea", "No Tea"};

     for (int i = 0; i < 6; i++){

        if (teaTypes[i] == "Herbal Tea")
        {
            continue;
        }

         if (teaTypes[i] == "No Tea"){
            break;
        }
        
        cout << teaTypes[i] << " has been served \n";

     }
     cout << "\n";
     cout << "Tea Serving has stopped \n";

}

void teaWeekScheduler(){

    string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int i = 0; i < 7; i++)
    {
        cout << "Day - " << week[i] << endl;

        for (int j = 0; j < 1; j++)
        {
            cout << "2 cups have been brewed for breakfast" << endl;
            cout << "2 cups have been brewed for lunch" << endl;
            cout << "2 cups have been brewed for dinner" << endl;

            cout << "\n";
        }
        
    }
    
}

int main() {

    // chaiTracker();
    // addSugar();
    // totalTeaBatch();
    // teaChecker();
    teaWeekScheduler();

    return 0;

}