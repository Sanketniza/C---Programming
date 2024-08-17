 #include<iostream>
 using namespace std;

  int main()
  {
    int n;
    cout << "enter row and columns ";
    cin >> n;

    for(int i = 1; i<=n; i++) {
        for(int j = 1 ; j <= i; j++){
           
           cout << char (j + 97) << " ";
        }
          cout << endl;
    }
      return 0;
  }