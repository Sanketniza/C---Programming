// calculator by using swatch statements

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char op;
    cin >> op;

    int m;
    cin >> m;

    switch (op)
    {
    case '+':
        cout << n + m;
        break;

    case '-':
        cout << n - m;
        break;

    case '*':
        cout << n * m;
        break;
    case '/':
        cout << n / m;
        break;

    default:
        cout << "not implemented" << endl;
    }
}