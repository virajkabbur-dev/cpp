#include <iostream>
#include <string>

using namespace std;

void add(){

    int a,b;

    cout << "Enter number 1 - " << endl;
    cin >> a;
    cout << "Enter number 2 - " << endl;
    cin >> b;
    cout << "Sum of " << a << " + " << b << " is " << a+b << endl;
}

void subtract(){

    int a,b;

    cout << "Enter number 1 - " << endl;
    cin >> a;
    cout << "Enter number 2 - " << endl;
    cin >> b;
    cout << "Subtraction of " << a << " - " << b << " is " << a-b << endl;
}

void multiply(){

    int a,b;

    cout << "Enter number 1 - " << endl;
    cin >> a;
    cout << "Enter number 2 - " << endl;
    cin >> b;

    cout << "Multiplication of " << a << " * " << b << " is " << a*b << endl;
}

void divide(){
    int a,b;

    cout << "Enter number 1 - " << endl;
    cin >> a;
    cout << "Enter number 2 - " << endl;
    cin >> b;
    cout << "Division of " << a << " / " << b << " is " << a/b << endl;
}

int main() {

    int choice, n1, n2;

    while (true)
    {
        cout << "\n";
        cout << "Welcome to the Simple Calculator! \n";
        cout << "\n";
        cout << "Choose what you wish to do: (1 - Addition | 2 - Subtraction | 3 - Multiplication | 4 - Division | 5 - Exit the calculator) \n";
        cin >> choice;

        if (choice == 5){
            break;
        }

        switch (choice){

        case 1:{
            add();
            break;
        }

        case 2:{
            subtract();
            break;
        }

        case 3:{
            multiply();
            break;
        }

        case 4:{
            divide();
            break;
        }

        case 5:{
            break;
        }

        default:
            cout << "Enter valid response \n";
            break;
        
    }

    return 0;

    }

    cout << "\n";
    cout << "Thanks for trying the calculator!";


}