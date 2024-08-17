/* -------------------------------------------------------------------------- */
/*     67 //! cpp functions template and function template with parameters    */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

/* float fun (int a , int b ) {
    float result = (a + b) / 2 ;
    return result;
}  */

// todo : using template function

template <class T1, class T2>
T1 fun(T1 a, T2 b)
{
    T1 result = (a + b) / 2;
    return result;
}

// example 2

template <class T1>
void swapp(T1 &a, T1 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
}

int main()
{

    /*     // cout << " the operation result is " << fun(5 , 3) << endl ;
        printf("the result is %f",fun(5 ,4)) ; */

    float a;
    a = fun<int, int>(5, 4);
    cout << " the operation result is " << a << endl;

    int x = 43 ,  y = 34;
    swapp(x, y);
    cout << x << endl << y << endl;
       
   return 0;
}