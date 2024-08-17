// WAP to print sum of all the even digits of a given number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the N : ";
    cin >> n;
    int id;
    int sum = 0;
    // while(n!=0)

    if (n % 2 == 0)
    { 
        //    int id = n % 10;
            n /= 10;
            sum += id;
            cout << sum ;
    }
}