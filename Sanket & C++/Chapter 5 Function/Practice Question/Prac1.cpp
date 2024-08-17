
#include <iostream>
#include <math.h>
using namespace std;

int fact(int x)
{
   int f = 1;
   for (int i = 1; i <= x; i++)
   {
      f *= i;
   }
}

int ncr(int n, int r)
{
   return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
   int n;
   cout << "enter the value of n :";
   cin >> n;

   for (int i = 0; i <= n; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << ncr(i, j) << " ";
      }
      cout << endl;
   }
}