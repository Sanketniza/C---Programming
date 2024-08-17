// calculator by using  if else

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    int m;
    cout << "Enter another number: ";
    cin >> m;

    if (op == '+')
        cout << " addition of two number is : " << n + m;

    if (op == '-')
        cout << " subtraction of two number is : " << n - m;

    if (op == '*')
        cout << " multiplication of two number is : " << n * m;

    if (op == '/')
    cout << " division of two number is : " << n / 5 ;

    return 0;
}
