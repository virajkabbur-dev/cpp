#include <iostream>
#include <string>

using namespace std;

void checkPalindrome (){
    int n = 2772;
    int og = n;
    int n1 = 0;
    int digit = 0;

    while(n > 0){
        digit = n % 10;
        n1 = n1 * 10 + digit;
        n = n / 10;
    }
    
    if (og == n1)
        {
            cout << "number is palindrome \n";
        }
        else {
            cout << "not a palindrome \n";
        }

}

void largestDigit (){

    int n = 12233921;
    int maxDigit = -1;
    int currentDigit = 0;

    if (n == 0){
        maxDigit = 0;
    }

    while (n > 0){

        currentDigit = n % 10;
       
        // maxDigit = max(currentDigit, maxDigit);

        if (currentDigit > maxDigit){
            maxDigit = currentDigit;
        }

        n = n / 10;

    }

    cout << maxDigit;

}

void powerOfNumber (){

    int power = 4;
    int number = 3;
    int result = 1;

    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }

    cout << "The power of " <<number << " ^ " << power << " is " << result << endl;
    
}

int main() {

    // checkPalindrome();
    // largestDigit();
    powerOfNumber();

    return 0;

}