#include <iostream>
#include <string>

using namespace std;

void posNegZero(int n){

    if (n > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Number is negative" << endl;
    }
    else{
        cout << "Number is zero" << endl;
    }

}

void evenOdd(int n){

    if (n % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else {
        cout << "Number is odd" << endl;
    }

}

int countDigits(int n){
    
   int count = 0;

   while (n > 0)
   {
     count ++;
     n = n / 10;
   }
   
   return count;

}

int reverseNumber(int n){

    int digit = 0;
    int rev = 0;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
     
}

int main() {

    int n;

    cout << "Enter a number - ";
    cin >> n;

    posNegZero(n);
    evenOdd(n);
    int count = countDigits(n);

    cout << "\n";
    cout << "Digits in the number - " << count;

    int rev = reverseNumber(n);

    cout << "\n";
    cout << "Reverse of Number is - " << rev;

    return 0;

}