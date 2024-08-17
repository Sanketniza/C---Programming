
/* -------------------------------------------------------------------------- */
/*                               72 //! STL List                              */
/* -------------------------------------------------------------------------- */

/* 
  
  ? The STL list is used to represent the algorithms concepts that are very difficult to write manually .
  ?  so STL list give shortcuts to perform this algorithm.
  
*/

/* 
    ^    Template for list

    *      #include<iostream>  
    *      #include<list>  
    *        using namespace std;  
    *      int main()  
    *    {  
    *        list<int> l;  
             list<int> l{1,2,3,4};  // List can also be initalized with the parameters.
    *    } 

   ^ List can be initialised in two ways.

    *      list<int>  new_list{1,2,3,4};  
           or  
    *      list<int> new_list = {1,2,3,4};  
*/

#include <iostream>
#include <list>   // INITIALIZE list before using .....
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator sonu;
 //&   iterator sonu= : It defines the position before which the new element is to be inserted.

    for (sonu = lst.begin(); sonu != lst.end(); sonu++)
    {
        cout << *sonu << " ";
    }
    cout << endl;
}

/*
   ? instead of this display function we con use like this: in int main(){
   list<int>::iterator iter;
   iter - list1.begin();

   cout << *iter << " ";
   iter ++;
   cout << *iter << " ";
   iter ++;
   cout << *iter << " ";
   iter ++;
   cout << *iter << " ";
   iter ++;

}
 */
int main()
{

    // ^ example 1
    
   cout << "The 1nd example is start....."<< endl << endl;

     list<int> list1; // list of 0 length lists
    // todo : showing list of elements
    list1.push_back(12);
    list1.push_back(14);
    list1.push_back(15);
    list1.push_back(16);
    display(list1);

    // todo: Removing elements from list 1
    list1.pop_front();
    list1.pop_back();
    display(list1);

    // todo: Inserting elements in list 1
    list1.push_front(11);
    list1.push_front(10);
    display(list1);

    // todo: Removing elements from list 1
    list1.remove(10);
    display(list1);

    // todo : sorting elements in list 1
    list1.sort();
    display(list1);

    // todo : Reversing elements in list 1
    list1.reverse();
    display(list1);

    //^  example 2

cout << "The 2nd example is start....."<< endl;

    // list<int> list1;

    list<int> list2(3); // empty list of size 3

    list<int> :: iterator sanket;

    sanket = list2.begin();
    *sanket = 7;
    sanket++;
    *sanket = 8;
    sanket++;
    *sanket = 9;
    sanket++;

   display(list2);
   list1.merge(list2);
   cout << "list 1 after merging : " ;
   display(list1);

   list1.sort();
   list2.sort();
   list2.merge(list2);
   cout << "list 1 after merging : ";
   display(list1);
     
    return 0;
}