// print the odd number between 1 to 100

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the n :";
    cin >> n;

    int oddNumbers[n];
    int count = 0; // Count of odd numbers found

    // Find and store odd numbers between 1 and 100
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        { // Check if the number is odd
            oddNumbers[count] = i;
            ++count;
            // cout << count <<" ";
        }
    }

    // Print the odd numbers stored in the array
    cout << "Odd numbers between 1 and 100 are:\n";
    for (int i = 0; i < count; ++i)
    {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    cout << "total number of odd numbers:" << count << endl;

    return 0;
}
