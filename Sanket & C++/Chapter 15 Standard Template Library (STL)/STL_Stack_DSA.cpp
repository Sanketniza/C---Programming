
#include <iostream>
#include <stack>
using namespace std;

/*

 1) same of operation are not allowed in stack
   like front() , back() ect

*/

int main()
{

       stack<int> s; // creating stack

     // ----------------------------------------------

     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);

     cout << "size of stack is : " << s.size() << endl;
     cout << "The stack top element is : " << s.top() << " ";

     while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

     cout << endl
          << "--------------------------------------------------" << endl
          << endl;

     // ----------------------------------------------

     s.pop();
     s.pop();
     cout << "size of stack is : " << s.size() << endl;
     cout << "The stack top element is : " << s.top() << " ";
     cout << endl
          << "--------------------------------------------------" << endl
          << endl;

     // ----------------------------------------------

     return 0;
}