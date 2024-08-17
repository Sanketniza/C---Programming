/* -------------------------------------------------------------------------- */
/*              24 //! static data member and methods in cpp                  */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class emp
{
    //* static function are create , where one function can access the all the member of static variable
    //* static member ko hi access kr sake ;
    
    int id;
    static int count ;

public:
    void setData(void)
    {
        cout << "Enter Employee ID : " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // static function
    static void getCount(void)
    {
        cout << "Total Number Of Employees Created = " << count << endl;
    }
};

//* count is the static data member of class employee
int emp ::count = 67; //* default value is 0 you can do like this also ---> count = 0 ;

int main()
{
    emp sanket, suresh, pratik;
    // sanket.id = 1;
    // --> sanket.count = 1 // cannot do this as id and count private

    sanket.setData();
    sanket.getData();
    emp::getCount(); // static function

    suresh.setData();
    suresh.getData();
    emp::getCount(); // static function

    pratik.setData();
    pratik.getData();
    emp::getCount(); // static function

    return 0;
}

