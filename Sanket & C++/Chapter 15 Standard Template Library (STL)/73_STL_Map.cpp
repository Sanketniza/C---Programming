#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    // map is all ready sorted . 4,5,7,1,3 --> ans -> 1,3,4,5,7
    map<string, int> m;

    m["Atul"] = 58;
    m["Rohit"] = 57;
    m["Kishlay"] = 78;
    m["Aditya"] = 65;
    m["Sachin"] = 53;

    map<string, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << endl
         << "------------------------------------------------" << endl;

    // ----------------------------------------------------------------

    map<int, string> m1;

    m1[1] = "Atul";
    m1[2] = "Rohit";
    m1[3] = "Kishlay";
    m1[4] = "Aditya";
    m1[5] = "Sachin";

    m1.insert({6, "sanket"});

    cout << "size of map is : " << m1.size() << endl;
    cout << "value in map :" << m1[1] << endl;

    cout << "total value in map : " << endl;
    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl
         << "------------------------------------------------" << endl;

    // ----------------------------------------------------------------

    cout << "which element is present at index 5 : " << m1.at(5) << endl;
    cout << "check 7 is present of not " << m1.count(7) << endl;

    cout << endl
         << "------------------------------------------------" << endl;

    // ----------------------------------------------------------------

    m1.erase(5);
    m1.erase(2);
    cout << "size of map is : " << m1.size() << endl;

    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl
         << "------------------------------------------------" << endl;

    // ----------------------------------------------------------------

    auto it = m1.find(4);

    cout << (*it).first << " " << (*it).second << endl;



    return 0;
}
