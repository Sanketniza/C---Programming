// WAP to print product of digit of a given number.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the N : ";
    cin >> n;

    int product = 1;
      while (n!=0)
      {
        int id = n %10;
        n /= 10 ;
        product *= id;
      }
      cout << product ;
}

/*
 OUTPUT :-
          enter N :456
          120
*/