/* -------------------------------------------------------------------------- */
/*     25       //!. Array of Object and passing object an a argument         */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class employee
{

    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 234;
        cout << "Enter the Id : " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Employee ID is :" << id <<" and salary is : "<< salary << endl;
    }
};
int main()
{
    employee sh[4];

    for (int i = 0; i < 4; i++)
    {
        sh[i].setId();
        sh[i].getId();
    }

    return 0;
}

// passing an object

#include <iostream>
using namespace std;

class complex
{

    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "The number is : " << a << "+" << b << "i" << endl;
    }
};
int main()
{

    // creating objects of class

    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBysum(c1, c2);
    c3.printNumber();

    return 0;
} 