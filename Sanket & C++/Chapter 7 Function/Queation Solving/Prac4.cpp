// make a function which calculates the factorial of n using recursion.

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1 || n == 0) 
    return 1;

    return n * fact (n-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    cout<<fact(n);
}