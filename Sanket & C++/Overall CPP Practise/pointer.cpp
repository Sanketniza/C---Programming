
#include <iostream>
using namespace std;
int main()
{

    /*     int a = 10;
        int *ptr = &a;
        cout << "The value of a is : " << a << endl;
        cout << "The value of a is : " << *ptr << endl;
        cout << "The value of a is : " << &a << endl;
        cout << "The value of a is : " << &*ptr << endl;
        cout << "The value of a is : " << ptr << endl; */

    /*     int a = 23;
        int b = 45;

        cout << "Before swaping the value : " << a << " and " << b << endl;

        int *c = &a;
        int *d = &b;

        *c = *c + *d;
        *d = *c - *d;
        *c = *c - *d;

        cout << "After swaping the value : " << *c << " and " << *d << endl; */

    /* int arr[10];
    int *ptr2 = arr + 20;
    cout << *ptr2 << endl; */

    /* int *a = NULL;
    cout << *a << endl; */

    /*  int i = 23;
     int j = 3;
     int k = i + j ;
     cout << sizeof(k) << endl;
      cout << "Size of integer data type : " << sizeof(int) << endl;
      cout << "Size of float data type : " << sizeof(float) << endl;
      cout << "Size of double data type : " << sizeof(double) << endl;
      cout << "Size of char data type : " << sizeof(char) << endl; */

    /*  int *a;
     int mark[5];
     int count = sizeof(mark) / sizeof(int);

     for (int i = 0; i < 5; i++)
     {
        cin >> mark[i] ;
     }

     a = mark;

     cout <<"the value is : " << *a << endl;
     cout <<"the value is : " << *mark << endl; */

    /*   char *names[5] = {"john",
                       "Peter",
                       "Marco",
                       "Devin",
                       "Ronan"};
      for (int i = 0; i < 5; i++)
      {
          std::cout << names[i] << std::endl;
      } */

/*      void *ptr;
    // int *ptr;
    int a = 4;
    ptr = &a;

    cout << "The value of a is : " << a << endl;
    cout << "The value of a is : " << &a << endl;
    cout << "The value of ptr is : " << *ptr << endl;
    cout << "The value of ptr is : " << &ptr << endl;
 */

/* 
 int a = 23;
 int &ref = a ;
 int &value = ref ; // References to non-const values
 int &sanket = a;  // References as aliases
 
 cout << "The value of a is : " << a << endl;
 cout << "The value of ref is : " << ref << endl;
 cout << "The value of value is : " << value << endl;
 cout << "The value of sanket is : " << sanket << endl;
 cout << "The value of a is : " << &a << endl;
 cout << "The value of ref is : " << &ref << endl;

//* int &b;
//* &b = a;

//* cout << "The value of a is : " << a << endl;
//* cout << "The value of b is : " << b << endl;
 */

/* void swap(int &p, int &q ) {

   int temp;
   temp = p ;
   p = q;
   q = temp;
}

int main() {

 int a = 23; 
 int b = 33;

  swap(a, b);

  cout << "THe value of a : " << a << endl;
  cout << "The value of b : " << b << endl;


    return 0;
} */


 int *a = new float[13];
 cout << sizeof(float) << endl;
 
 return 0;
}