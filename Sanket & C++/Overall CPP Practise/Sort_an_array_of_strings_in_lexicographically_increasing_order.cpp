
//! Write a program to sort an array of strings in lexicographically increasing order.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string arr[] = {"elderberry", "date", "cherry", "banana", "apple"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort (arr , arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " --> ";
   
    }

    return 0;
}

