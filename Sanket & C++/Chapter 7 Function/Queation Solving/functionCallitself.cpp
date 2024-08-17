 
  // print the number from n to 0 by using recursion 

   #include<iostream>
   using namespace std;


void print(int n)
{
    if(n==10) 
    return;

    cout<< n<< endl;
    print(n+1);
}
   int main(){

    int n;
     cout<<"enter n :";
     cin >> n; 

     print(n);
   }

   /* 
   enter n :10
        10
        9
        8
        7
        6
        5
        4
        3
        2
        1

 */