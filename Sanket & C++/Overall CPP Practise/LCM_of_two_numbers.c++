
//! Create a program to find the LCM (Least Common Multiple) of two numbers.

#include <iostream>
using namespace std;

int lcm(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }

  int max = a > b ? a : b;
  while (true) {
    if (max % a == 0 && max % b == 0) {
      return max;
    }
    max++;
  }
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "The LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;

  return 0;
}


