// Display this GP - 1,2,4,8,18,32 ,.... upto 'n' terms

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the value of n :";
    cin >> n;

    int a = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
}
/*
  OUTPUT :-
        enter the value of n :10
        1 2 4 8 16 32 64 128 256 512
*/