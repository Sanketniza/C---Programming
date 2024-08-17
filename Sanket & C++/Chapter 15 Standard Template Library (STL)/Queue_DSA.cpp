#include<iostream>
#include<queue>
using namespace std;
 
int main() { 

    queue <int> q; // creating queue

    // ----------------------------------------------------------------

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "size of queue is : " << q.size() << endl;
       cout << "The queue top element is : " << q.front() << " " <<endl;
       cout << "The queue last element is : " << q.back() << " " <<endl;

       while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl
         <<"--------------------------------------------------"<< endl <<endl;

    return 0;
}