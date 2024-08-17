
#include <iostream>
using namespace std;

class base1
{

public:
    void greet()
    {
        cout << "Hello World" << endl;
    }
};

class base2
{

public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};

class derived : public base1, public base2
{

public:
    void greet()
    {
        base1 ::greet();
    }
};

int main()
{

    base1 a;
    a.greet();

    base2 b;
    b.greet();

    derived s;

    s.greet();

    return 0;
}