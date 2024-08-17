 // print given pattern

 #include<iostream>
 using namespace std;

 int main()
 {
    int n;
    cout << "enter row :";
    cin >> n;

    int m;
    cout << "enter column :";
    cin >> m;

    for(int i =1 ; i <= n ; i++){  // number of rows 
        for(int j =1 ; j <= m ; j++){  // number of columns
            cout << " * ";
    }
    cout << endl;
 }
 }

 /*
 OUTPUT :-
          enter row :3
          enter column :3
          * * *
          * * *
          * * *
*/