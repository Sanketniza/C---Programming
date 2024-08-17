// Make a function which calculates 'a' raised to the power 'b' using recursion.

#include<iostream>
using namespace std;

int pow(int a , int b){
    if(b==0) return 1;

    return a * pow(a, b-1);
}

int main()
{
    int n;
    cout << "Enter m : ";
    cin >> n;

    int m;
    cout << "enter m:";
    cin >> m;

    cout<< "power of two number is : " << pow(n,m);
}

/* 

Enter m : 6
enter m:5
power of two number is : 7776

 */