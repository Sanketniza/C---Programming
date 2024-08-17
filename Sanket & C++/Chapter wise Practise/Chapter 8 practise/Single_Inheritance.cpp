/* 
#include <iostream>
using namespace std;

class sanket
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void sanket ::setdata(void)
{
    data1 = 233;
    data2 = 234;
}

int sanket ::getdata1()
{
    return data1;
}

int sanket ::getdata2()
{
    return data2;
}

class sanku : public sanket
{

    int data3;

public:
    void process();
    void display();
};

void sanku ::process(void)
{
    data3 = data2 * getdata1();
    
}

void sanku ::display(void)
{
    cout << "THe value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{

    sanku s;
    s.getdata1();
    s.getdata2();
    s.setdata();
    s.process();
    s.display();

    return 0;
} */

#include <iostream>
using namespace std;

class base // todo--> base class  
{
    int data1; // private by default and is not inherited........

public:
    int data2;
    void setData();
    int getData1();  // * If I take here void getData1() , I don't know why its show me error
    int getData2();  // * If I take here void getData2() , I don't know why its show me error
};

void base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

class derived : private base // todo --> derived class from base class
{           //* when become a private derivation class
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setData();  //* only this one changes is necessary in private derivation
    data3 = data2 * getData1();
}

void derived:: display()
{
    cout << "The value of data 1 is " << getData1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    // der.setData();  // this is invalid because of the private member are not access the outside......
    der.process();  // If you comment to this line then in output garbage value will be seen
    der.display();

    return 0;
}