//! Create a program to find the length of a string without using the strlen() function.

#include<iostream>
using namespace std;
 
int main() { 

    char str[100];
    int lenght = 0 ;

    cout << "Enter your name : " ;
    cin >> str;
    int length = 0;

    // cout << "The length of your name is: " << name.length() << endl;

   for (int i = 0; str[i] == '\0'; i++)
   {
     length++;
   }
   
     cout << "The length of the string is: " << length << endl;

    return 0;
}

