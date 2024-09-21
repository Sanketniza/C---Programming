#include<iostream>
using namespace std;
 
class student{

    int student_id;

    public:
        char name[23];
        int roll_no;

        void set_id(int id) {
            student_id = id;
        }

        void setName(char name[23]) {
            this -> name = name;
        }

        void setRoll_no(int roll_no) {
            this->roll_no = roll_no;
        }
  
 }; 

  class marks : public student {

  };


int main() { 

    marks sanket;


    return 0;
}