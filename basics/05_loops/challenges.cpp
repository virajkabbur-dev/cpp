#include <iostream>
#include <string>
#include <iterator>

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
    string meals[3] = {"breakfast", "lunch", "dinner"};

    for (int i = 0; i < 7; i++)
    {
        cout << "\n";
        cout << "Day - " << week[i] << endl;
        cout << "\n";

        for (int j = 0; j < 3; j++)
        {
            cout << "1 cup has been brewed for " << meals[j] << endl;
        }
        
    }
    
}

int main() {

    // chaiTracker();
    // addSugar();
    // totalTeaBatch();
    // teaChecker();
    teaWeekScheduler();

    // for (int i = arr.length(); i < count; i++)
    // {
    //     /* code */
    // }
    return 0;


}