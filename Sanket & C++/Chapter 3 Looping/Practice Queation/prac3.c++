// Display this AP - 1,3,5,7,9 ......

#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter the value of n : ";
    // cin >> n;

    // for(int i = 1; i<= 3*n+1; i+=3)
    // {
    //     cout << i << " ";
    // }

    // ---- another method to display

    int m;
    cout << "enter the value of m : ";
    cin >> m;

    int a = 3;
    for (int i = 4; i <= m ; i++)
    {
        cout << a << " ";
        a = a + 3;
    }
}