
#include<iostream>
using namespace std;
 
 // If cost price and selling price of an item is input through the keyboard , write a program to determine whther the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.
 
int main() { 
 
   int cost_price ;
   cout << "What is your cost price?" << endl;
   cin >> cost_price ;

   int selling_price ;
   cout << "What is your section price?" << endl;
   cin >> selling_price ;

   if(cost_price < selling_price) {
       cout << "You made profit of " << (selling_price - cost_price) << " rupees" << endl;
   }
   else if(cost_price > selling_price) {
       cout << "You made loss of " << (cost_price - selling_price) << " rupees" << endl;
   }

   else {
    cout << "thank you bro";
   }
    

    return 0;
}