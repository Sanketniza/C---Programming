//! Create a program to reverse a given string

#include<iostream>  
using namespace std;  
int main()  
{  
    string strings;  
    cout<<"Enter a string: ";  
    getline(cin,strings);

 
 for(string::reverse_iterator itr=strings.rbegin();  itr!=strings.rend();  ++itr)  
     cout<<*itr;  
    return 0;  
}