
   /* -------------------------------------------------------------------------- */
   /*               65 //! Template with multiple parameters in cpp              */
   /* -------------------------------------------------------------------------- */
   
#include<iostream>
using namespace std;
 
/* 
  ! SYntax
  class template with multiple parameters (one ,two ,three , etc...)
  template <class T1 , class T2 , etc>    
^    class name of class {
^      body
^    }
 */

 template<class T1 , class T2>
class myclass{
   
     public:
      T1 data1;
      // T1 = char ;
      T2 data2;
      // T2 = float ;

      myclass(T1 a, T2 b) {  //* Constructor....
        data1 = a;
        data2 = b;
      }

      void display () {
        cout << this->data1 << " " << this->data2 << endl;
      }
 }; 
int main() { 
    
      myclass <char , float > obj('A', 1.2);  //^ Assigning the value to a constructor..................
    //myclass <T , T > obj('A',1.2);
      obj.display();
    return 0;
}