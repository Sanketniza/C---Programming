#include <iostream>
#include <cmath>

using namespace std;

class simple
{
    int a, b;

public:
    void setVal()
    {
        cout << " Enter the value of a : " << endl;
        cin >> a;
        cout << " Enter the value of b : " << endl;
        cin >> b;
    }

    void getVal()
    {
        cout << "The addition of a and b is  : " << a + b << endl;
        cout << "The substraction of a and b is  : " << a - b << endl;
        cout << "The multiplication of a and b is  : " << a * b << endl;
        cout << "The division of a and b is  : " << a / b << endl;
    }
};

class difficult
{

    int a, b;

public:
    void setVal()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }

    void getVal()
    {
        cout << "The addition of a and b is  : " << sin(a) << endl;
        cout << "The addition of a and b is  : " << sin(b) << endl;
        cout << "The addition of a and b is  : " << cos(a) << endl;
        cout << "The addition of a and b is  : " << cos(b) << endl;
    }
};
int main()
{

    simple s;
    s.setVal();
    s.getVal();

    difficult f;
    f.setVal();
    f.getVal();
    return 0;
}