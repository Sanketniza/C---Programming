
//! Write a program to sort an array of integers in ascending order.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {7, 4, 1, 9, 3, 2, 5, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + size);
    //^ using the concept of STL in cpp (standard template library)

    cout << "After sorting\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
