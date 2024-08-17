
//! Implement a program to find the power of a number using loops.

#include <iostream>
using namespace std;

int main()
{

    int base, exponent, power;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    power = 1;

    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }

    cout << "The result is " << power << endl;
    
    return 0;
}