
// friend classes and member friend function

#include <iostream>
using namespace std;

// forward declaration
class complex;  // pud tula ha class bhetan 
class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); // Declaration
    int sumCompComplex(complex, complex); // Declaration
};

class complex
{

    int a, b;
    //   Individually declaring function as friends -->> ek ek class function ko access karana
    /*  friend    int sumRealComplex(complex, complex);
        friend    int sumCompComplex(complex, complex); */

    // Aliter:- declaring the entire (all the class function ko permission dena) calculator class as friend
    friend class calculator; // Giving permission to the entire calculator class

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{

    complex o1, o2;

    o1.setNumber(1, 5);
    o2.setNumber(3, 8);

    o1.printNumber();
    o2.printNumber();

    calculator calc;

    int res = calc.sumRealComplex(o1, o2);
    cout << " The  sum of  real part of o1 and o2 is : " << res << endl;

    int resr = calc.sumCompComplex(o1, o2);
    cout << " The  sum of  real part of o1 and o2 is : " << resr << endl;

    return 0;
}