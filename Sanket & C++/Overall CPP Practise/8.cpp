//! Implement a program to convert temperature from Celsius to Fahrenheit and vice versa.

#include <iostream>
using namespace std;

int main()
{

    float c, f;
    char choice;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    cout << "Enter choice(C/F): ";
    cin >> choice;

    switch (choice)
    {
    case 'c':
        f = (c * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit is: " << f;
        break;
    case 'F':

        return 0;
    }
}