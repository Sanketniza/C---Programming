
#include<iostream>
using namespace std;
 
class complex{
     int real;
     int rea;

      public:
        void set(int a , int b) {
             real = a ;
             rea = b;
        }

        void display() {
             cout << "The value of real : " << real << endl;
             cout << "The value of rea : " << rea << endl;
        }
  
 }; 
int main() { 

    complex *p = new complex;
    p->set(1, 4);
    p->display();

    complex *k = new complex;
    (*k).set(3,4);
    (*k).display();

    

    return 0;
}