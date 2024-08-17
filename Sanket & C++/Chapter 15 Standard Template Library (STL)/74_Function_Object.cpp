
/* -------------------------------------------------------------------------- */
/*          74 //!             function object (functor)                         */
/* -------------------------------------------------------------------------- */

#include <iostream>
#include <functional>
using namespace std;

int main()
{
    //todo:  Function Object (functor) :- Function wrapped in a class so that it available like an object.

    int arr[] = {1,2,3,6,5,4,7};
    // sort(arr);
    sort(arr , arr+4);
    sort(arr, arr+10 ,greater<int>());

    for (int i = 0; i < 8; i++)
    {
       cout << arr[i] << endl;
    }
    
    return 0;
}