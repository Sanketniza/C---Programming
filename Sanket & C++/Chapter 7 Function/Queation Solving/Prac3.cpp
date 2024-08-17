
 // print sum from 1 to n (return type)
 #include<iostream>
 using namespace std;
 
 int sum(int n){
    if(n==1) 
    return 1;

    return n+sum(n-1);
 }
  int main()
  {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout << sum(n);
  }

  /* 

Enter a number: 10
55

 */

