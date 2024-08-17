// WAP to check if a number is composite or not
// prime or not

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the N : ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            cout << "composite "; // prime number

            else
            cout << "not composite ";
        break;
    }
}

/*
 OUTPUT :-
          enter the N : 15
          not composite 
*/