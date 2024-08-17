// wap to print reverse of a given number.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    int r = 0;
    while(n!=0)
    {
        int id = n%10;
        r *=10;
        r += id;
        n /= 10;
    }
     cout << r ;
}

/*
 OUTPUT :-
         enter n: 132456
         654231
*/