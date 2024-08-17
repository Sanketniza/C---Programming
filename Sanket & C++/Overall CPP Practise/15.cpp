
//!  Implement a program to convert a decimal number to binary.

/*
#include <iostream>
#include <string>
using namespace std;

void sanket(int decimal)
{
    if (decimal == 0)
    {
        cout << "The binary number represent all are 0" << endl;
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
}

int main()
{
    int decimal;
    cout << "Enter the decimal number: ";
    cin >> decimal;

    sanket(decimal);
    return 0;
}


 */
#include <iostream>
#include<string>
using namespace std;

void sanket(int decimal)
{
    int binary[32];
    int index = 0;

    if (decimal == 0)
    {
        cout << "Decimal number is not have any xyz value" << endl;
    }

    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    cout << endl;
}

int main()
{

    int decimal;
    cout << "Enter Decimal number : " << endl;
    cin >> decimal;

    sanket(int decimal);

    return 0;
}