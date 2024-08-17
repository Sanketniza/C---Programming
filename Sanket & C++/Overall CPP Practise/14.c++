
//! Write a program to find the GCD (Greatest Common Divisor) of two numbers.


#include<iostream>
using namespace std;
 
int main() { 

    int a , b , gcd;
    cout <<"Enter the 1st number: ";
    cin >> a;
    cout <<"Enter the 2nd number: ";
    cin >> b;

    for (int i = 1; i <= a && b; i++)
    {
      if(a%i==0 && b%i==0){
        gcd = i;
      }
    }
    cout << "The GCD is: " << gcd << endl;
    
    return 0;
}
