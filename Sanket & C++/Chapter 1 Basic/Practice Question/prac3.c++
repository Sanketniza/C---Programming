// write a program to print the sum of two number but take no from user

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // cout << "enter the value of a : " << a << endl;

    cout << "enter the value of a :" << endl;
    cin >> a;
    cout << "enter the value of b :" << endl;
    cin >> b;

    int sum = 0;
    sum = a + b;

    cout << "sum of two numbers :" << sum;
}