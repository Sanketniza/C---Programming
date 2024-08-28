

/* -------------------------------------------------------------------------- */
/*              //!     29..  constructor                                      */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

//!   Characteristics of Constructor ;
//^[vp]:-  Only one default constructor is allowed in one class..
//~ Default constructor : constructor with no parameters......
//?       example - default constructor
//                class base{
//                base (){
//                   cout << "base" << endl;
//                }
//               };

//* 1. It should be declared in the public section of the class.
//* 2. They are automatically invoked (called) whenever the object is created.
//* 3. They cannot return values and do not have return types.
//* 4. It can have default arguments.
//* 5. We cannot refer to their address.
//* 6. Constructors can be called using the object name or we can say it can be called implicitly.
//* 7. constructor is a special member function with the same name as of the class
//* 8. It is used to initialize the object of its class

class complex
{

    int a, b;

    public:
        complex(void); // todo -- > Constructor Declaration ..

        void printNumber()
        {
            cout << "complex number are :" << a << " & " << b << endl;
            cout << " Your number is : " << a << " + " << b << " i " << endl;
        }
};

    complex::complex(void)
        { // todo --> This is a default constructor as it takes no parameter
        
            a = 2;
            b = 34;
            cout << "THe value of a and b is : " << a << " & " << b << endl;
        }
int main()
{

    complex c1;
    complex c1, c3;

    // c1.printNumber();
    // c3.printNumber();

    return 0;
}