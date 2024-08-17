
/* -------------------------------------------------------------------------- */
/*            49//!      Initialization list in constructor                   */
/* -------------------------------------------------------------------------- */

//!   Theory :---
//& VIP : Initialization list is only used in 𝘊𝘰𝘯𝘴𝘵𝘳𝘶𝘤𝘵𝘰𝘳 ..
//   Initialization list is used to initialize the data members of the class with the values provided during the object creation.
//   It is a list of expressions, enclosed in parentheses, that is placed after the constructor's parameter list and before the constructor's body.

// todo: syntax for initialization list in constructor
//? constructor (argument-list) : initialization-section
//?      {
//?        assignment + other code;
//?      }

/*
    class text {
        int a ;
        int b;
           public:
             test(int i , int j) : a(i), b(j)
    }
 */

#include <iostream>
using namespace std;

class Test
{
     int a;
     int b;

       public:
          Test(int i , int j) : a(i), b(j)   //todo ; initialization list
       //*   Test(int i , int j) : a(i), b(i + j )
       //*   Test(int i , int j) : a(i), b(i * j )
       //*   Test(int i , int j) : a(i), b( a + j )
       //*   Test(int i , int j) :  b(i * j ) , a(i + b)  -->This will create problems because int a in initialization first  and then int j in initialization 
          {
              cout<<"The value of a is "<<a<<endl;
              cout<<"The value of b is "<<b<<endl;
          }
};
int main()
{
    Test t(4,5);
    return 0;
}