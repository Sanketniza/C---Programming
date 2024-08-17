
#include <iostream>
#include <vector> //* including or adding vector lybrary
#include <typeinfo> // * to check the type of vector
using namespace std;

int main()
{

    //? Ways to create a vector
    // todo:- capacity :- capacity is increased by 2time . initially it is 0 . when the size of vector is 2 that means capacity is 4 . when the size of are is 4 that means capacity is 8 .

    vector<int> v; //^ zero length integer vector
                   // vector<data_type> vector_name;

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    cout << "size of vector : " << v.size() << endl;         //^ it show , how many element are present in vector
    cout << "capacity of vector : " << v.capacity() << endl; //^ It show How much capacity have a vector to store elements
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.push_back(1); //^ insert an element at the end
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.push_back(2);
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.push_back(3);
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.push_back(4);
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i] << " ";
    }
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    cout << "element at index 2 : " << v.at(2) << endl; //^ It show the element at index 2
    cout << "element at index 3 : " << v.at(3) << endl;
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    cout << "first element : " << v.front() << endl; //^ It show the first element
    cout << "last element : " << v.back() << endl;   //^ It show the last element
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.pop_back(); //^ delete last element
    cout << "last element : " << v.back() << endl;
    cout << "Current element in vector : " << v.size() << endl;
    for (int i : v)
    { //^ simple way to use for loop
        cout << i << " ";
    }
    cout << endl
         << endl;

    cout << "checking vector is empty or not : " << v.empty() << endl; //^ Its return true or false

    //~ only clearing the size not capacity
    cout << "Size of vector : " << v.size() << endl;
    cout << " capacity of vector : " << v.capacity() << endl;

    v.clear(); //^ delete all the element

    cout << "vector size: " << v.size() << endl;
    cout << " capacity of vector : " << v.capacity() << endl;

    cout << "Current element in vector : " << endl;
    for (int i : v)
    { //^ simple way to use for loop
        cout << i << " ";
    }
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.push_back(51);
    v.push_back(52);
    v.push_back(53);
    v.push_back(54);
    v.push_back(55);
    v.push_back(56);
    v.push_back(57);

    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i] << " ";
    }
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

 cout << "Data of vector : " << endl;
    int *k = v.data();  //^ This function returns a pointer to an array internally used by a vector to store its elements

    for (int i = 0; i < v.size(); i++)
        cout << *k++ << " ";

    cout << endl;

        cout << "type of vector : " << typeid(v).name() << endl;
        cout << "type of vector : " << typeid(*k).name() << endl;

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    v.shrink_to_fit(); //^ it will shrink the vector
    cout << "capacity of vector : " << v.capacity() << endl;

    v.resize(3); //^ it will resize the vector
    cout << "capacity of vector : " << v.capacity() << endl;

    v.insert(v.begin(), 5);    //^ it will insert the element at first index
    v.erase(v.begin() + 1);   //^ it will delete the element at index 1
    v.erase(v.begin() + 1, v.begin() + 3); //^ it will delete the element from index 1 to 3
    // v.erase (v.from , v.to); // kaha se kaha tak delete karna hai
    cout << "Current element in vector : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

      cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    vector<int> v1(5, 100); //^ size is 5 and elements vector of 100, like this- [100,100,100,100,100]
    // vector <data_type> vector_name(size, value);
    for (int i : v1)
    {
        cout << "" << i << " ";
    }

    cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    vector<int> copy(v1); //^ copy constructor
    for (int i : copy)
    {
        cout << "" << i << " ";
    }
    
      cout << endl
         << "--------------------------------------------------" << endl
         << endl;

    // --------------------------------------------------

    cout << "max size of vector : " << v.max_size() << endl; //^ it show the max size of vector

    return 0;
}

/*
   //! Lits of vectors operation

   1) push_back  --> it will insert the vector
   2) pop_back  --> it will delete the vector
   3) insert  --> it will insert the vector
   4) erase  --> it will erase the vector
   5) clear  --> it will clear the vector only the size not capacity
   6) swap  ---> it will swap the vector
   7) resize  --> it will change the size of vector
   8) capacity  --> it will show the capacity of vector
   9) max_size  --> it will show the max size of vector
   10) empty  --> it will check the vector is empty or not
   11) assign  --> it will assign the vector
   12) at  --> it will return the element at index
   13) front --> it will return the first element
   14) back --> it will return the last element
   15) data --> it will return the pointer of vector
   16) shrink_to_fit --> it will reduce the capacity of vector
   17) reserve --> it will increase the capacity of vector

 */