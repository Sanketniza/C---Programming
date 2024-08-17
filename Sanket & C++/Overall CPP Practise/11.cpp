
//! Implement a program to calculate the exponentiation of a number using recursion.....


#include<iostream>
using namespace std;
 
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
        return 1 / base * power(base, -exponent);
    else
        return base * power(base, exponent - 1);
        // 2 * (2 * 2);
        // 2 * 4 = 8;
}

int main() { 
    int base, exponent;

     cout << "Enter the base: ";
     cin >> base;

     cout << "Enter the exponent: ";
     cin >> exponent;

     cout << "The result is " << power(base, exponent) <<  endl;
    return 0;
}