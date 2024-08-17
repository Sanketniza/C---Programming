// display this GP- 3,12,48,...upto n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the value of n :";
    cin >> n;

    int a = 3;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        a = a * 4;
    }
}

/*
  OUTPUT :-
        enter the value of n :3
        3 12 48
*/