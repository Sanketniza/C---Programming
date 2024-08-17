
 // print number from 1 to n or 10 by using recursion

 #include<iostream>
 using namespace std;

 void print(int n){
    if(n==11) 
    return;

    cout<<n<<endl;
    print(++n); //todo: (n+1)
 }

 int main(){
    print(1);
 }

 /*
     take number from user

     void print(int x , int num){
        if(x >n) return;

        cout << x << endl;
        print (x+1 , num)
     }

     int main(){
        int num;
        cout<<"enter number:";
        cin>>num;

        print(1,num);
     }
  */

  /*
     take number from user

     void print(int x , int num){
        if(x >n) return;
        
        print (x+1 , num)

        cout << x << endl;
     }

     int main(){
        int num;
        cout<<"enter number:";
        cin>>num;

        print(1,num);
     }
  */

 /* 
 
 1
2
3
4
5
6
7
8
9
10

 */