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
            cout << j  << " ";
            
    }
    cout << endl;
 }
 }

 /*
 OUTPUT :-
          enter row :4
          1
          1 2
          1 2 3
          1 2 3 4
*/