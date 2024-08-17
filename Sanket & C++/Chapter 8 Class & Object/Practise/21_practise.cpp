/*       
      #include <iostream>
      using namespace std;
      
      class sanket
      {
      
          int a, b;
      
      private:
          int c, d;
      
      public:
          int e, f;
          void setdata(int a1, int b1, int c1, int d1)
          {
              a = 12;
              b = 12;
              c = 12;
              d = 12;
          }
          void showdata()
          {
              cout << "a= " << a << " b= " << b << " c= " << c << " d= " << d << " e= " << e << " f= " << f << endl;
          }
      };
      int main()
      {
         sanket s;
        //  s.a = 10;
        //  s.b = 20;
        //  s.c = 30;
        //  s.d = 40;
         s.e = 110;
         s.f = 2220;
         s.setdata(20, 450, 12, 20);
         s.showdata();
          return 0;
      } */

      #include<iostream>
      using namespace std;
       
      class shope{
          int a[3];
          int b[3];
          int counter;

          public:
            void setdata(void){
                 counter = 0;
            }
            void setprice(void);
            void displayprice(void);
       }; 

    void shope :: setprice(void) {
         
          cout << " Enter the number of items :" << counter  + 1 << endl;
          cin >> a[counter];

          cout << "enter price of your item " << endl;
          cin >> b;
          counter++;
    }

      int main() { 
      
        
      
            return 0;
      }