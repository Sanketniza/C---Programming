#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    { // row
        for (int j = 1; j <= n -i; j++)
        { // space
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        { // start
            cout << "*" ;
        }
        cout << endl;
    }
}

/* 
Enter the number : 6
     *
    **
   ***
  ****
 *****
******

 */