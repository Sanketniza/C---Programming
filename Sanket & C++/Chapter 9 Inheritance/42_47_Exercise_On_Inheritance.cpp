
/* -------------------------------------------------------------------------- */
/*                //!               Exercise                                  */
/* -------------------------------------------------------------------------- */

/*

   * Create 2 classes:
     ? Example 1..
        todo: 1) SimpleCalculator -
                  Takes input of 2 numbers using a utility function and performs + ,- , * , / and display the results using another function.

       todo: 2) ScientificCalculator -
                 Takes input of 2 numbers using a utility function and performs any fore scientific operation of your choice adn display the results using another function


    * Create another class HybridCalculator  and inherit it using these 2 classes :
      ? Example 2
        todo:   Q1). What type of Inheritance are you using ?
           * --> Multiple Inheritance
        todo:   Q2). Which mode of Inheritance are you using ?
           * --> public SimpleCalculator, public ScientificCalculator
        todo:   Q4). Create an object of HybridCalculator and display the results of simple and scientific  calculation
           * -->
        todo:   Q3). How is code reusability implemented ?
           * -->

 */


//^ example 1

/*
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << " Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }

    void operation()
    {
        cout << " THE addition of a and b is : " << a + b << endl;
        cout << " THE substraction of a and b is : " << a - b << endl;
        cout << " THE multiplication of a and b is : " << a * b << endl;
        cout << " THE deviation of a and b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << " Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }

    void operation()
    {
        cout << " THE cos of a and b is : " << cos(b) << endl;
        cout << " THE sin of a and b is : " << sin(a) << endl;
        cout << " THE tan of a and b is : " << tan(a) << endl;
        cout << " THE exp of a and b is : " << exp(a) << endl;
    }
};
int main()
{
    SimpleCalculator s;
    s.getData();
    s.operation();

    cout << endl;

    ScientificCalculator a;
    a.getData();
    a.operation();

    return 0;
}
*/
 

//* ;- example 2

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataS()
    {
        cout << " Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }

    void operationSimpleCalculator()
    {
        cout << " THE addition of a and b is : " << a + b << endl;
        cout << " THE substraction of a and b is : " << a - b << endl;
        cout << " THE multiplication of a and b is : " << a * b << endl;
        cout << " THE deviation of a and b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << " Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }

    void operationScientificCalculator()
    {
        cout << " THE cos of a and b is : " << cos(b) << endl;
        cout << " THE sin of a and b is : " << sin(a) << endl;
        cout << " THE tan of a and b is : " << tan(a) << endl;
        cout << " THE exp of a and b is : " << exp(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator obj;

    obj.getDataS();
    obj.operationSimpleCalculator();

    cout << endl;

    obj.getData();
    obj.operationScientificCalculator();
    return 0;
}
