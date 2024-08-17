
//! Create a program that takes user input for their name and prints a personalized greeting.

#include<iostream>
using namespace std;
 
int main() { 

     string name;
     cout << "Enter your name :" << endl;
     cin >> name;

     cout << "Good morning " << name <<  endl;

    return 0;
}