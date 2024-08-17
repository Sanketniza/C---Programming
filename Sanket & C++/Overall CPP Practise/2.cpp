

//! Write a program to swap the values of two variables using a temporary variable.

#include<iostream>
using namespace std;
 
int main() { 

    int a , b , temp;
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After the swapping of the variables : " << a << " " << b << endl;

    return 0;
}