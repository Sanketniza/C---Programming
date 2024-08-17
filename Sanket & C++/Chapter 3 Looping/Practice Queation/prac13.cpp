// WAP to print sum of digits of a given number
// 1+2+3+4+8=18

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter N :";
    cin >> n;

    int sum = 0;
    while(n!=0)
    {
        int id = n%10;
        n = n/10;  // n/=10
        sum += id ;
    }
    cout << sum ;
}

/*
 OUTPUT :-
          enter N :456
          15
*/