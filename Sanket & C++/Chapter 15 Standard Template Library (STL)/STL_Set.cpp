#include <iostream>
#include <set>
using namespace std;

int main()
{

    // set = all element in set are unique
    // once inset the element you cannot be  modified it only push and pop you can perform.

    set<int> s;

    s.insert(1);
    s.insert(42);
    s.insert(42); // not inserted in set because 42 is already present.
    s.insert(3);
    s.insert(3);
    s.insert(3); // not inserted in set because 3 is already present.
    s.insert(14);
    s.insert(14); // not inserted in set because 14 is already present.

    cout << "size of set is : " << s.size() << endl;

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    //  ------------------------------------------------

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl
         << "--------------------------------------------------" << endl;

    //-------------------------------------------------

    cout << "5 is present or not : " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "5 is at : " << *it << endl;

    for (auto it = itr; it!= s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // -------------------------------------------------

    return 0;
}