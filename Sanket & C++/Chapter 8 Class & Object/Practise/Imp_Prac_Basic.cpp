
#include <iostream>
using namespace std;

class sanket
{

    //   ! Ex one , access the public member variables
    /*  public:
           string name;
           string model;
           int year;
    */

    //   ! Ex one , access the private member variables

    string name;
    string model;
    int year;

public:
     // todo: Declaration inside of class.
    /*

     void setName(string x , string y , int z ){
             name = x;
             model = y;
             year = z;
         }
         */

 // todo: Declaration outside of class.
    void setName(string x, string y, int z);

    void display()
    {
        cout << "Name of car is : " << name << ", model is : " << model << ", year is : " << year << endl;
    }
};

 // todo: Declaration outside of class.
void sanket :: setName(string x, string y, int z)
{
    name = x;
    model = y;
    year = z;
}
int main()
{

    //   ! Ex one , access the public member variables

    /*  sanket a , b , c;
     a.name = "safari";
     a.model = "Z4";
     a.year = 2000;

     b.name = "BMW";
     b.model = "X5";
     b.year = 2010;

     c.name = "Audi";
     c.model = "A4";
     c.year = 2015;

     cout << "Name of first car: "
     << a.name << " , THe model is : "
     <<a.model << " Which is developed in Year of :"
     << a.year << endl << endl;

     cout << "Name of first car: "
     << b.name << " , THe model is : "
     <<b.model << " Which is developed in Year of :"
     << b.year << endl << endl;

     cout << "Name of first car: "
     << c.name << " , THe model is : "
     <<c.model << " Which is developed in Year of :"
     << c.year << endl;
  */

    //   ! Ex one , access the private member variables

    sanket a, b, c;

    a.setName("safari", "X23", 2023);
    b.setName("Audi", "X4", 2000);
    c.setName("BMW", "X5", 2010);

    a.display();
    b.display();
    c.display();

    return 0;
}