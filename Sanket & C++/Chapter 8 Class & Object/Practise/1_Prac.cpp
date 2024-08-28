#include<iostream>
using namespace std;

class A {

    int b;

    public:
        int a;
        int h;
        char s;
        
      void  setA() {
            cout << "Enter the value of a : " << endl;
            a = 23;
            cout << a << endl;
        }

    void getA(int a) {
        b = a;
        cout << b << endl;
    }   

    int getterA() {
        cout << "The value of b is : " << b << endl;
        return b;
        cout << endl;
    }

    A(){
        cout << "constructor is called" << endl;
    }

    ~A(){
        cout << "destructor is called" << endl;
    }

    A(int a){
        cout << "parameterized constructor is called" << endl;
        cout << a << endl;
    }

    // this keyword

    A(int a , char c) {
        cout << "this keyword we are going to trying" << endl;
        cout << a << " " << c << endl;
    }
};
 

int main() { 

    A a(34 , 'c');
    a.setA();

    a.getA(12);

    cout << " The value of b is : " << a.getterA() << endl;

  

    return 0;
}