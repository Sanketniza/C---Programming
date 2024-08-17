// print this type of pattern 60 30 20 15 12

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the N : ";
    cin >> n;

    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
            cout << i << " ";
        // break;  OP - 30
    }
}

/*
 OUTPUT :-
         enter the N : 60
         30 20 15 12 10 6 5 4 3 2 1
*/