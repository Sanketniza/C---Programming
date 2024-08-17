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
            cout << " * " << " ";
            
    }
    cout << endl;
 }
 }

 /*
 OUTPUT :-
          enter row  :4
          *
          *   *
          *   *   *
          *   *   *   *
*/