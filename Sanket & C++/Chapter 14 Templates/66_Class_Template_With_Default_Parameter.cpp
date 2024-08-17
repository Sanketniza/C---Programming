#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class sanket
{
public:
    T1  a;
    T2  b;
    T3  c;

    sanket(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
    }
};
int main()
{
    sanket<> s(12, 12.3, 'a');
    s.display();

    cout << endl;

    sanket <float , char , char> p(12.13, 'j', 'a');
    p.display();

    cout << endl;

    sanket<float , char , char > q('a', 'b', 'c');
    q.display();

    return 0;
}