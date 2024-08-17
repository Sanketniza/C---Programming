
 //! Create a program to find the maximum and minimum elements in an array.

#include<iostream>
using namespace std;
 
int main() { 
    
     int arr[] = {2,3,4,5,6,7,45};

     int max = arr[0];
     int min = arr[0];
     int n = sizeof(arr) / sizeof(arr[0]);
;

     for(int i = 0 ; i <= n ; i++) {

        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
     }

     cout << " The maximum  elements : " << max << endl;
     cout << "The minimum elements : " << min << endl;
    

    return 0;
}