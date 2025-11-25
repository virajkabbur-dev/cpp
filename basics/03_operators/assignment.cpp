#include <iostream>

using namespace std;

int chai(){
    int teaBags;

    cout << "Enter number of tea bags - \n";
    cin >> teaBags;

    if (teaBags < 20){
        teaBags += 10;
        cout << "You get 10 extra tea bags, your total bags - " << teaBags << endl;
    }
    else {
        cout << "Your total tea bags - " << teaBags << endl;
    }

}

int main(){

    chai();

    int teaBags;

    cout << "Enter number of tea bags - ";
    cin >> teaBags;

    if (teaBags < 10){
        teaBags += 5;
        cout << "You have been given 5 extra tea bags, and now you have - " << teaBags << " tea bags" << endl;
    }
    else {
        cout << "You have enough tea bags and hence won't be given any more" << endl;
    }
}

