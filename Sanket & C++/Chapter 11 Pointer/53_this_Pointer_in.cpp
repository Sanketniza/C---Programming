
 /* -------------------------------------------------------------------------- */
 /*        53     //!           this pointer in cpp                            */
 /* -------------------------------------------------------------------------- */


/* 
    todo: this pointer
    1) this is a pointer
    2) syntax :--  this->
    3) this is a keyword which is a pointer which points to the object which invokes the member function
 */

 #include<iostream>
 using namespace std;
  
 class A{
     int a;
      public:

       void setData(int a) {
        this->a = a;
       
       }

       // todo: example 2

      //  A & setData(int a ){
      //   this->a = a;
      //   return *this;
      //   }

       void getData(){
        cout << "THe value of a : " << a << endl;
        // cout << "THe value of a : " << this->a << endl;
       }
  }; 
 int main() { 
 
    A a;
    a.setData(10);
    a.getData();

    // todo: example 2
      //  A a;
      //  a.setData(10).getData();
 
    return 0;
 }