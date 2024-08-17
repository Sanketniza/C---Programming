 // print given pattern

 #include<iostream>
 using namespace std;

 int main()
 {
    int n;
    cout << "enter row :";
    cin >> n;

    for(int i =1 ; i <= n ; i++){  // number of rows printing
        for(int j =1 ; j <= n ; j++){  // number of columns printing
            cout <<(char)( j + 64)<< " "; // conversion int to char
    }
    cout << endl;
 }
 }

 /*
 OUTPUT :-
          enter row :4
          A B C D 
          A B C D 
          A B C D 
          A B C D 
*/