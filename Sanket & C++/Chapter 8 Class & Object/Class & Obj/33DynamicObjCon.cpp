/* -------------------------------------------------------------------------- */
/*                      33 //! Dynamic Object constructor                     */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = p;

     for (int i = 0; i < y; i++)
     {
         returnValue = returnValue * (1 + interestRate);
     }
}

void BankDeposit::show()
{
   cout << "Principal amount was " << principal << "\n";
   cout << "Return value after " << years << " years is " << returnValue << "\n";
}

int main()
{
   int p, y;
   float r;
   int R;

   cout << "Enter the value of p y r: ";
   cin >> p >> y >> r;
   BankDeposit bd1(p, y, r);
   bd1.show();

   cout << "Enter the value of p y R: ";
   cin >> p >> y >> R;
   BankDeposit bd2(p, y, R);
   bd2.show();

   return 0;
} 

//! +++++++++++++++++++++            -+++++++++++++
/* 
#include<iostream>
using namespace std;
 
class bank{
    
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

    bank(int p, int y, float r);
    void show();
 }; 

  bank :: bank(int p, int y, float r){

    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;

    for(int i = 0; i < y ; i++){

        returnValue = returnValue * (1 + interestRate);
    }
  }

 void bank :: show(){

    cout << "Principal amount was " << principal << "\n";
    cout << "Return value after " << years << " years is " << returnValue << "\n";
    cout << principal <<" was deposited for " << years << interestRate << "\n";
 }
int main() { 

     bank b(1000, 1, 0.05);
     b.show();

    return 0;
} */