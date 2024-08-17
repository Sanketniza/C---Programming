//! Implement a program to concatenate two strings without using the built-in functions.
 
#include<iostream>
using namespace std;
 
int main() { 

    string str1, str2;
    cout << "Enter the 1st string: ";
    getline(cin, str1);+
    0
    cout << "Enter the 2nd string: ";
    getline(cin, str2);

    str1 += str2;
    cout << "The concatenated string is: " << str1 <<" " << endl;


    return 0;
}