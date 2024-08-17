
 #include<iostream>
 using namespace std;
  
 class sanket{

    public:
    // void show() {
    virtual  void show() {
         cout << "base class is called" << endl;
      }
   
  }; 

  class saurabh: public sanket{
 
    public:
      void show() {
         cout << "derived 1 class is called" << endl;
      }
  };

  class rohit : public sanket {
     
        public:
      void show() {
         cout << "derived 2 class is called" << endl;
      }
  };

 int main() { 
 
      sanket *s;
      saurabh a;
      rohit b;

      s = &a;
      s->show();

      s = &b;
      s->show();
 
        return 0;
 }