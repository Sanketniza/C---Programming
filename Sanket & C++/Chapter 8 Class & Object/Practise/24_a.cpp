
#include<iostream>
using namespace std;
 
class sanket{

    int id;
    static int count;

    public:

        void ab(void){

              cout << "enter ID : "  << endl;
              cin >> id;
              count ++;
        }

        void cd (void) {
            cout << " The id of person is : " << id << " and the count is : " << count << endl;

        }

        void display(void){
            cout << "The counter of people is : " << count << endl;
        }
  
 }; 

   int sanket :: count = 34;
int main() { 

    sanket rohit;

    rohit.ab();
    rohit.cd();
    rohit.display();


    return 0;
}