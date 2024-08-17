
 //! Implement a program to find the second largest element in an array.

#include <iostream>
using namespace std;

/* Implement a program to find the second largest element in an array.
 * This program uses a single loop to traverse the array and find the
 * maximum element. The second max element is stored in a variable and
 * is updated every time a larger element is found.
 */


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 11, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int second_largest = findSecondLargest(arr, n);

       int max = arr[0];
       int second_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        }
        
        else if(arr[i] > second_max) {
            second_max = arr[i];
        }

        else {
            cout<< "No second largest element present in the array." << endl;
        }
    // cout << arr[i] << " " ;
    // cout << max << " " ;
    // cout << second_max << endl;
    }

    cout << "The second largest element is : " << second_max << endl;

    return 0;
}


