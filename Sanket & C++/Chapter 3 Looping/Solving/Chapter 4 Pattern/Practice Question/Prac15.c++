// print the given pattern

 #include<iostream>

   using namespace std;

    int main()
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        int a =1;

         for (int i=1; i<=n; i++){
            for(int j=1;j<=i;j++){
             cout << a << " ";
             a++;
         }
           cout<< endl;
    }
      return 0;
    }


    /* 
           OUTPUT :-
              Enter a number: 4
                1
                2 3
                4 5 6
                7 8 9 10
     */