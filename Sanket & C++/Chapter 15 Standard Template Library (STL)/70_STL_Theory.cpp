/* -------------------------------------------------------------------------- */
/*                              70 //! STL THEORY                             */
/* -------------------------------------------------------------------------- */


/* 
   !   STL = Containers + Algorithm + Iterators  

      ?      Containers : objects which stored data
      ?      Algorithm  : Procedure to process data
      ?      Iterator   : object which points to an element of a container
      

      todo :  Containers :-
         *       1)  Sequence Containers:
                        --> Linear fashion
                        Ex- Vector , list , dequeue
              ^   a) Vector :-
                    In array we have to declare same size , when we cross the that size we have need to create a new .but in Vector there is no need to declare size of vector (array) because vector has size there is no need to declare size of vector.
            ?          Random access is fast 
            ?          Insertion at middle and deletion at middle is slow
            ?          Insertion at end and deletion at end is fast
	               #include<vector>

              ^  b) List :-         
            ?           Random access is slow
            ?           Insertion at middle is fast
            ?           Insertion at end and deletion at end is fast
                  #include<list>   

         *       2)  Associative Containers:
                       --> Direct Access
                        Ex- set , multiset , map , multimap
            
            ?           All operations first except random access

         *       3) Derived Containers:
                       --> Real world Modelling
                        Ex- Stack , Queue , Priority    

            ?           Depends on Data structure
 
   
*/

#include<iostream>
#include<vector>
using namespace std;
 
int main() { 

    vector<int> v1;
   

      return 0;
}