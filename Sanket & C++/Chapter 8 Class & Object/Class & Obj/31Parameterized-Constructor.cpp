
/* -------------------------------------------------------------------------- */
/*               // todo -->31. Parameterized and Default Constructor            */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int, int); // --->>> constructor declaration..
     void printNumber() {
        cout << "Your number is " << a << " + " << b << endl;
     }
};

Complex::Complex(int x, int y) // --->>>This is parameterized  constructor as it takes 2 parameters
{
    a = x;
    b = y;

    cout << "Hello world" << endl;
}

int main()
{
    // implicit call
    Complex x(4, 8);
    x.printNumber();

    // Explicit call
    Complex y = Complex(5, 7);
    y.printNumber();

    return 0;
}