
//! Write a program to find the sum of digits of a given number using recursion.

#include <iostream>
using namespace std;

int sanket(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return (n % 10) + sanket(n / 10);
    }
}

int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    int sum = sanket(n);

    cout << "THe addition of :" << n << " is " << sum << endl;

    return 0;
}
