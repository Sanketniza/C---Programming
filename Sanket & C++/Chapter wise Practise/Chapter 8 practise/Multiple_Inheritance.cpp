/*
#include<iostream>
using namespace std;

class base1{

     protected:
            int base1;

    public:
            void setBase1(int a)
            {
                base1 = a;
            }
 };

 class base2{
        protected:
                int base2;

        public:
                void setbase2(int a){
                    base2 = a;
                }
 };

class derived : public base1 , public base2 {
    public :
         void display(){
            cout << "THe value of base1 class is : " << base1 << endl;
            cout << "THe value of base2 class is : " << base2 << endl;

            // cout << "THe value of base2 class is : " << a << endl;
            // cout << "THe value of base2 class is : " << setbase1 << endl;
            // cout << "THe value of base2 class is : " << setbase2 << endl;
            // cout << "THe value of derived class is : " << derived << endl;
         }
};


int main() {

    derived s;
     int a;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    s.setBase1(a);

    cout << "Enter the value of a : " << endl;
    cin >> a;
    s.setbase2(a);

    s.display();

    return 0;
} */

#include <iostream>
using namespace std;

class base1
{
private:
    int base1;

public:
    void setBase1(int a)
    {
        base1 = a;
    }

    int ok1()
    {
        return base1;
    }
};

class base2
{
private:
    int base2;

public:
    void setbase2(int a)
    {
        base2 = a;
    }

    int ok2()
    {
        return base2;
    }
};

class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "The value of base1 class is : " << ok1() << endl;
        cout << "The value of base2 class is : " << ok2() << endl;
        // cout << "The value of base2 class is : " << base1 << endl;
        // cout << "The value of base2 class is : " << base2 << endl;
    }
};

int main()
{

    derived s;
    int a;

    cout << "Enter the value of a for Base 1: ";
    cin >> a;
    s.setBase1(a);

    cout << "Enter the value of a for Base 2: ";
    cin >> a;
    s.setbase2(a);

    s.display();

    return 0;
}