#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);

    cout << "Before sorting : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "After sorting : " << endl;
    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl
         << "------------------------------------------------" << endl;

    // ------------------------------------------------

    //^ Binary Search

    cout << "Find 3 : " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "lower bound of 3 : " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "upper bound of 3 :" << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;

    cout << endl
         << "------------------------------------------------" << endl;

    // ------------------------------------------------

    int a = 2;
    int b = 4;

    cout << "maximum element between a and b is :" << max(a, b) << endl;
    cout << "minimum element between a and b is :" << min(a, b) << endl;

    swap (a, b);
    cout << endl;

    string ab = "abc";
    reverse(ab.begin() , ab.end());
    cout<< "reverse of ab is :" << ab << endl;

       cout << endl
         << "------------------------------------------------" << endl;

    // ------------------------------------------------

    //^ rotating the vector

    vector <int > v1 = {1, 2, 3, 4, 5};
    cout << "Before rotating : " << endl;
    for(int i : v1) {
        cout << i << " " ;
    }
    cout << endl;

    rotate(v1.begin() , v1.begin() +1 , v1.end());
    cout <<"After rotating : " << endl;
    for(int i : v1) {
        cout << i << " " ;
    }

    return 0;
}