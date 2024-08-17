#include <iostream>
using namespace std;
// This program is not work because it is pass by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 23;
    int y = 24;

    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
}