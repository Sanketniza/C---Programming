//! Write a program to generate the Fibonacci series up to a certain number of terms.

#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter teh a : ";
    cin >> a;

    int fib[a];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2 ; i <= a; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << " THe fib of is " << a << " is : ";

    for (int i = 0; i < a; i++)
    {
        cout << fib[i] << " ";
    }

    return 0;
}