// calculate the simple interest

#include <iostream>
using namespace std;

int main()
{
   int p = 1000;
   float r = 30;
   float t = 5;
   float si = (p * r * t) / 100;
   cout << "simple interest is : " << si;
}