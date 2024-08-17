// WAP to check if a number is composite or not
// prime or not

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the N : ";
    cin >> n;
    bool flag = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    if(n==1) 
    cout << "Neither Prime nor Composite ";
    else if (flag == true) 
    cout << "prime";
    else
    cout << "composite";
}

/*
 OUTPUT :-
        enter the N : 4
        composite

        enter the N : 5
        prime
*/