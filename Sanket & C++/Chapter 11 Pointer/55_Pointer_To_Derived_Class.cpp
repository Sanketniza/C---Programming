

/* -------------------------------------------------------------------------- */
/*    55      //!           Pointer TO Derived class                          */
/*    55      //?         ex - Run time polymorphism                          */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;

    void display()
    {
        cout << " Displaying Base class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;

    void display()
    {
        cout << " Displaying Base class from derived to variable var_base : " << var_base << endl;
        cout << "Displaying Derived class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    //& int *a;
    BaseClass obj_base;   // If i comment this line so no effect occurs on overall performance..
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived ;  //* Pointing base class pointer to derived class
    // If i comment this line so no effect occurs on overall performance..
    //^ int *a = &b;
    // todo : here we are pointing base class pointer to derived class but after the printing not derived class display function will be called . to print the derived class display function we need to use virtual function method....

   
    base_class_pointer->var_base = 34;
    // obj_base.var_base(34);                  //* Thrown an error .....
    // base_class_pointer->var_derived = 134;  //* It will be thrown error ......
    base_class_pointer->display(); 

    base_class_pointer->var_base = 78;
    base_class_pointer->display();

    obj_derived.var_derived =45;
    obj_derived.display();

    return 0;
}