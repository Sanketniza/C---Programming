
#include<iostream>
using namespace std;
 

int main() { 

  int a;
  cout << "enter first number" << endl;
  cin >> a;

  char op ;
  cout << "enter the operation to be perform : (+,-,*,/)" << endl;
  cin >> op;

  int b;
  cout << "enter second number" << endl;
  cin >> b;

 if(op == '+') {
    cout << "the sum of a and  b  is : " << a + b << endl;
 }
 if(op == '-') {
    cout << "the sub of a and  b  is : " << a - b << endl;
 }
 if(op == '/') {
    cout << "the sub of a and  b  is : " << a / b << endl;
 }
 if(op == '*') {
    cout << "the sub of a and  b  is : " << a * b << endl;
 }

 else {
    cout << "thank you user";
 }

    return 0;
}