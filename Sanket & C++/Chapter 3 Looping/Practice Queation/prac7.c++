 // print 100 to 1 
 // different will be 2
 // divided by 2 ex 100 50 25 12 6 3 1

 #include<iostream>
 using namespace std;

 int main()
 {
    // int n;
    // cout << "enter N : ";
    // cin >> n;

    // for(int i = 100 ; i >=1 ; i-- )
    // for(int i = 100 ; i >=1 ; i-=2 )
    for(int i = 100 ; i >=1 ; i/=2 )
    {
        cout << i << " ";
    }
 }

 /*
   OUTPUT :-
            100 50 25 12 6 3 1 
 */