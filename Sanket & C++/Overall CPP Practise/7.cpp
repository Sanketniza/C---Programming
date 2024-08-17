
//! Write a program to reverse a given integer.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "enter the number : " ;
    cin >> n;

    int reverse = 0 ;

    while (n != 0 ) {
        int digit = n % 10;
        reverse = reverse  * 10 + digit ;
        n = n / 10 ;
    }
    cout << "reverse of the number is : " << reverse ;
     return 0;
}