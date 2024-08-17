
// calculate area of a circle

#include <iostream>
using namespace std;

int main()
{
   float radius;
   cout << "Enter your radius: ";
   cin >> radius;
   
   float area = 3.14 * radius * radius;
   cout << "Area of circle is :" << area << endl
        << "Thank you";
   return 0; // required to write a program
}