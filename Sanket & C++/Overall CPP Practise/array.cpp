/* #include<iostream>
using namespace std;

int main() { 
    int a[5];
    int n = sizeof(a)/sizeof(a[0]); // Calculate the number of elements in the array

    // Asking for each array element with a loop
    for (int i = 0; i < n; i++) {
        cout << "Enter array element " << (i + 1) << ": ";
        cin >> a[i];
    }

    // Printing the array elements
    cout << "You entered: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
 */

#include<iostream>
using namespace std;
  
  void sanket(int m[]) {
    int count = 0 ;
    for (int i = 0; i < 5 ; i++) {
        cout << m[i] << endl;
        count++;
    }

    cout << "The number of elements in the array are : " << count << endl;
  }

int main() { 

    int a [] = {1, 2, 3, 4, 5};

 cout << "The element in the array are : " << endl;
    sanket(a);

    return 0;
}