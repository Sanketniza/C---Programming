
// Take positive integer input and tell if give no  is a three digit number or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "entre the number";
    cin >> n;

    if (n > 99 && n < 1000)
        cout << "this is a three digit number";

    else
        cout << "this is not a three digit number";
}