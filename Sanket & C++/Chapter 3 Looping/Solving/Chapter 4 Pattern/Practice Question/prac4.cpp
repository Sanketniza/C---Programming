// print given pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter row :";
    cin >> n;

    for (int i = 1; i <= n; i++)  // number of rows printing
    { 
        for (int j = 1; j <= n; j++)  // number of columns printing
        {
            cout << j + 15 << " ";
        }
        cout << endl;
    }
}

/*
OUTPUT :-
         enter row :3
         16 17 18
         16 17 18
         16 17 18
*/