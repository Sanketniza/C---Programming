

//! Implement a program to convert a binary number to decimal. 

#include <iostream>
using namespace std;

int main() {
  int binaryNumber, decimalNumber = 0, base = 1, remainder;

 cout << "Enter a binary number: ";
  cin >> binaryNumber;

 while (binaryNumber > 0) {
    remainder = binaryNumber % 10;
    decimalNumber += remainder * base;
    base *= 2;
    binaryNumber /= 10;
 }

  cout << "The decimal equivalent of " << binaryNumber << " is " << decimalNumber << endl;

  return 0;
}

