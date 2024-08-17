#include <iostream>
#include <list>
using namespace std;


//^ list is a doubly linked list 
//^ list it has two pointers prev and next .
//^ list it is used for storing data in doubly linked list.
//^ list it is not used for storing data in singly linked list.

int main()
{

    list<int> l; // creating is dually linked list
    list <string> s; // creating is singly linked list

    // --------------------------------------------------

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);

    cout << "size of doubly linked list is : " << l.size() << endl;
    cout << "The doubly linked list is : " << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl
          <<"--------------------------------------------------"<<endl << endl;

    // --------------------------------------------------

    l.pop_back();
    l.pop_front();
    cout << "The doubly linked list is : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After popping the doubly linked list size is : " << l.size() << endl;
    cout << endl
                  <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    list<int>::iterator it;
    it = l.begin();
    it++; // inserting the element in second position mean's index is 1
    l.insert(it, 6);
    cout << "The doubly linked list is : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After inserting the doubly linked list size is : " << l.size() << endl
                  <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    l.erase(l.begin());
    // l.erase(--l.end());
    // l.erase(l.begin() , l.end());
    cout << "The doubly linked list is : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After erasing the doubly linked list size is : " << l.size() << endl
         <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    cout << "The first element of doubly linked list is : " << l.front() << endl;
    cout << "The last element of doubly linked list is : " << l.back() << endl
                  <<"--------------------------------------------------"<< endl <<endl;


    // --------------------------------------------------

    list<int>::reverse_iterator rit;
    rit = l.rbegin();
    cout << "The reverse doubly linked list is : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl 
             <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    list<int> k(3, 7); //~ (size(how many time) , value)
    l.merge(k);

    cout << "The merged doubly linked list is : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl
                  <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    
    list<int> copy(l);

    cout << "The copy doubly linked list is : " << endl;
    for (int i : copy)
    {
        cout << i << " ";
    }

    cout << endl
              <<"--------------------------------------------------"<< endl <<endl;


    // --------------------------------------------------
 
    l.sort();
    cout << "The sorted doubly linked list is : " << endl;
    for (int i : l) cout << i << " ";
    cout << endl
                 <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------

    l.reverse();
    cout << "The reversed doubly linked list is : " << endl;
    for (int i : l)
     cout << i << " ";
    cout << endl
                 <<"--------------------------------------------------"<< endl <<endl;

    // --------------------------------------------------
  
   l.unique();  //~ It removes all the duplicate elements from the list.
    cout << "The unique doubly linked list is : " << endl;
    for (int i : l)
     cout << i << " ";
    cout << endl
                 <<"--------------------------------------------------"<< endl <<endl;

    return 0;
    
}