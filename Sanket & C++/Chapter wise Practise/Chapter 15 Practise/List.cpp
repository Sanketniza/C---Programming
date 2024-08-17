
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &1st)
{

    list<int>::iterator sanket;

    for (sanket = 1st.begin(); sanket != 1st.end(); sanket++)
    {
        cout << *sanket << endl;
    }

     cout << endl;
}

int main()
{
    list<int> sa;

    sa.push_back(1);
    sa.pop_back();

    sa.push_front(475);
    sa.push_front(545);
    sa.push_front(78);
    sa.push_front(852);
     
     sa.pop_back();
sa.pop_front();

sa.sort();

    return 0;
}
