
/* -------------------------------------------------------------------------- */
/*                  68 //! Overloading template function                       */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

template <class T>
class sanket
{ 
     public:
       T data;
       sanket(T a) {  // todo: here T = data type
        data = a;
       }

       void display();
};

template <class T>
void sanket<T>::display() {  // todo: declaration of display function outside the class 
    cout << data << endl;
}

void func(int a){
   cout << "I am first function" << endl;
 }

 template<class T>
 void func1(T a) {
    cout << "I am second function" << endl;
 }


int main()
{

//   sanket<float> s (12.45);
//   sanket<char>  s ('s');
  sanket < int > s (456);
//   cout << s.data << endl;
  s.display();


  func(10); // todo: Exact match takes the highest priority
  func1(10);  // todo : Exact match takes the highest priority
    return 0;
}