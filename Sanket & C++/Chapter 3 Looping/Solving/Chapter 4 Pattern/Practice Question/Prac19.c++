
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int mid = n/2 +1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid ||j ==mid)
           // if ( i == 3 || j == 3 )
            {
                cout << 1 << " ";
            }
            else
                cout << " " << " ";
        }
        cout << endl;
    }
    return 0;
}

/* 
Enter the number : 5
    1
    1
1 1 1 1 1
    1
    1

 */