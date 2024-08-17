
//! Create a program to find the factorial of a number entered by the user.


 #include<iostream>
using namespace std;
  
int main() { 
 
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    int fact = 1;

    for(int i=1; i<=a; i++) {
        fact = fact * i;
    }

    cout << "The factorial of a number : " << fact << endl;
 
    return 0;
}

