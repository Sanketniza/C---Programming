#include<iostream>
using namespace std;
 
 // todo: example using template

 template <class T>  // * Through the template you can use any data type . Here T is data type(int , float , char , double etc...)
 // T can declared at the time of creating object in int main () {} 
class vector{
    public:
      T *arr;  // T = int 
      int size;

        vector(int a ) {
            size = a;
            arr = new T[size];
        }

        T dotProduct (vector &v) {
            T d = 0;
            for (int i = 0; i < size; i++) {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
 }; 
int main() { 
  
   // * here we are creating object of vector class with int data type for T ..
   vector<int>v1(3); // * we can use any data type between < >
   v1.arr[0] = 1;
   v1.arr[1] = 3;
   v1.arr[2] = 5;

   vector<int>v2(3);
   v2.arr[0] = 2;
   v2.arr[1] = 4;
   v2.arr[2] = 6;

   int d = v1.dotProduct(v2);
   cout<<d<<endl;

    return 0;
}

/*  
todo : example without using template 
class vector{
    public:
      int *arr;
      int size;

        vector(int a ) {
            size = a;
            arr = new int[size];
        }

        int dotProduct (vector &v) {
            int d = 0;
            for (int i = 0; i < size; i++) {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
 }; 
int main() { 

    vector v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 3;
    v1.arr[2] = 5;

    vector v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 4;
    v2.arr[2] = 6;

    int a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
} */