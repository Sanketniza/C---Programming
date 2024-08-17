#include <iostream>
#include <deque> //! it is an dynamic array
using namespace std;

int main()
{

    deque<int> d;
    // deque<data_type> name;

    // --------------------------------------------------

    d.push_back(1);
    d.push_front(2);
    d.push_front(4);
    d.push_back(3);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl
         << endl;

    // --------------------------------------------------

    d.pop_back();
    d.pop_front();

    cout << "deque is : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // --------------------------------------------------

    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_front(8);
    d.push_front(9);
    cout << "deque is : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // --------------------------------------------------

    cout << "The first element is : " << d.front() << endl;
    cout << "The last element is : " << d.back() << endl
         << endl;

    // --------------------------------------------------

    cout << "The size of deque is : " << d.size() << endl;
    cout << " element at index 3 : " << d.at(3) << endl;
    cout << "Checking if deque is empty or not : " << d.empty() << endl
         << endl;

    // --------------------------------------------------

    cout << "Before erase the size of deque is : " << d.size() << endl;
    cout << "Before erase : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    d.erase(d.begin(), d.begin() + 3);
    // d.erase(starting_iterator, ending_iterator);

    cout << endl
         << "After erase : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After erase the size of deque is : " << d.size() << endl;
    cout << endl
         << endl;

    // ------------------------------------------------++

    deque<int> d1(5, 100);
    deque<int> copy(d1); // copy constructor

    cout << "copy deque is : " << endl;
    for (int i : d1)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // ------------------------------------------------++
    
    return 0;
}