
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // max heap size
    priority_queue<int> maxi;

    // min heap size
    priority_queue<int, vector<int>, greater<int>> mini;

    // ------------------------------------------------------------------

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "size of max heap is : " << maxi.size() << endl;
    cout << "The max heap top element is : " << maxi.top() << " " << endl;

    // while (!maxi.empty()) {
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }

    cout << "element present in priority queue are : " << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // ------------------------------------------------------------------

    mini.push(150);
    mini.push(45);
    mini.push(100);
    mini.push(15);
    mini.push(23);
    mini.push(12);

    cout << "size of min heap is : " << mini.size() << endl;
    cout << "The min heap top element is : " << mini.top() << " " << endl;

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        // mini.top() ;
        mini.pop();
    }

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    //  ------------------------------------------------------------------

     cout << "checking if max heap is empty or not : " << maxi.empty() << endl;
     cout << "checking if mini heap is empty or not : " << mini.empty() << endl;
     
    return 0;
}