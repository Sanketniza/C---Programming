
 #include<iostream>
 using namespace std;
  
 class Base1{
     
      int a;

        public:
            Base1 (int i){
                a=i;
            }

            void get() {
                cout << " The value of base 1 :" << a << endl;
            }
  }; 

 class Base2 {

      int b;
         public:    
                Base2(int i ){
                     b = i ;
                }  

                void get1(){
                    cout << "THe value of base 2 :" << b << endl;
                }
 };

 class derived : public Base1, public Base2 {
     
     int derived1 , derived2;

      public : 

       derived ( int k , int s) : Base1(k) , Base2(s) {
         
         derived1 = k;
         derived2 = s;
       }

       void display(){

        cout << "The value of derived 1 :" << derived1 << endl;
        cout << "THe value of derived 2 : " << derived2 << endl;
       }
 };

 int main() { 
 
    derived sanket(4,5);
    sanket.get();
    sanket.get1() ;
     sanket.display();
    
 
        return 0;
 }