// WAP to find the highest factor of a number "n"(other than n itself)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    int f = 1;
    for (int i = 1; i < n; i++)  // i <= n /2 ;
    {
        if (n % i == 0)
            f = i;
    }
    cout << f;
}