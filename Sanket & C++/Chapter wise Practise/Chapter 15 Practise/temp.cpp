
#include<iostream>
using namespace std;
 
 template<class T >
class sanket{
  
   public :
     T a;
      void setdata(T b){
          a = b;
      }

      void display() {
        cout << "The price of a is :" << a << endl;
      }
 }; 
int main() { 

  sanket <int> sa;
  sa.setdata(196);
  sa.display();
    

    return 0;
}