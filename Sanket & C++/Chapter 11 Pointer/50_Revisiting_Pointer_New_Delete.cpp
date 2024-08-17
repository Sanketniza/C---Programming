
/* -------------------------------------------------------------------------- */
/*     50   //!           Revisiting Pointers: new and delete                 */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main()
{

    // todo:  Basic Example of Pointers

    int a = 3;
    //   *a = 55;
    int *ptr = &a;
         /* int *ptr = new int(23);  //? above example by using new 
         cout << "The value of a is : " << *(ptr) << endl; */
    cout << "THe value of a is : " << *(ptr) << endl;
    cout << "THe value of a is : " << *(&ptr) << endl;
    cout << "THe value of a is : " << a << endl;
    cout << "THe value of a is : " << &a << endl;

    // todo :- new operator 

    int *p = new int(45);
    //  float *p = new float(45);
    cout << "THe value at address P is : " << *p << endl;
    
    // todo := delete operator 

     int *arr = new int(3);
     
       /*   int a = 3;   // ? same method to initialize without new operator
          int *arr = &a; */

     arr[0] = 12;
     //*(arr + 1) = 45;
     arr[1] = 13;
     arr[2] = 14;
     delete[] arr;
    //? delete[] arr;

      cout << "THe value of arr[0] is : " <<arr[0] << endl;
      cout << "THe value of arr[1] is : " <<arr[1] << endl;
      cout << "THe value of arr[2] is : " <<arr[2] << endl;

    return 0;
}