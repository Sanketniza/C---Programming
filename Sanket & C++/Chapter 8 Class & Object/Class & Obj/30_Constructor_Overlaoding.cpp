/* -------------------------------------------------------------------------- */
/*               //!:  constructor Overloading                                */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class Complex {

    int real, imaginary;

public:
    //^ Only one default constructor is allowed in one class..
    Complex() { //^  Default constructor 
        real = 0;
        imaginary = 0;
    }

    Complex(int x, int y) { //^  Parameterized constructor
        real = x;
        imaginary = y;
    }

    Complex(int x) { //^  Constructor with one argument
        real = x;
        imaginary = 0;
    }

    void printNumber() {
        cout << "Your number is : " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1; // Default constructor
    c1.printNumber(); //* Outputs: Your number is : 0 + 0i

    Complex c2(4, 8); // Parameterized constructor
    c2.printNumber(); //* Outputs: Your number is : 4 + 8i

    Complex c3(8); // Constructor with one argument
    c3.printNumber(); //* Outputs: Your number is : 8 + 0i

    return 0;
}


/* -------------------------------------------------------------------------- */
/*             //todo:  constructor with default arguments                    */
/* -------------------------------------------------------------------------- */
/* 
#include <iostream>
using namespace std;

class simple
{

    int data1;
    int data2;
    int data3;

public:

    simple(int a, int b = 6, int c = 3)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printdata();
};

void simple ::printdata()
{
    cout << " The value of data1 , data2 , data3 is : " << data1 << " ," << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(4,5);  // here you are not giving the value of "c " but value of "c " is given in public simple that is c = 3 also for b and a . but in case "a" in public we not 
    s.printdata();
    return 0;
} */