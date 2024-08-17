//! Write a program to check if a given number is a perfect number or not.

#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i * i != n)
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPerfect(n))
    {
        cout << n << " is a perfect number." << endl;
    }
    else
    {
        cout << n << " is not a perfect number." << endl;
    }

    return 0;
}


/* 
  ^ After the loop, the function checks if the sum of divisors (sum) is equal to n. If they are equal, it returns true, indicating that n is a perfect number; otherwise, it returns false.
 */

