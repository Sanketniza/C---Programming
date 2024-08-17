 // print given pattern

 #include<iostream>
 using namespace std;

 int main()
 {
    int n;
    cout << "enter row :";
    cin >> n;

    for(int i =1 ; i <= n ; i++){  // number of rows printing
        for(int j =1 ; j <= i ; j++){  // number of columns printing
            cout << (char)(64  + i) << " ";
            
    }
    cout << endl;
 }
 }

 /*
 OUTPUT :-
          enter row :3
          A
          B B
          C C C
*/