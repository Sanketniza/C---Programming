#include <iostream>
using namespace std;

class base
{
    int x;
    int y;

public:
    base(int a, int b)
    {
        x = a;
        y = b;
    }

    base (int k ){
        x = k;
        y = 0;
    }

    void display(){
        cout << x << ", " << y << endl;
    }
};
int main()
{
    base c1(4, 2);
    base c2(41);

    c1.display();
    c2.display();

    return 0;
}