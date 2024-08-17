// If cost price and selling price of an item is input through the keyboard , write a program to determine whther the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;

int main()
{
    int sellPrice;
    cout << "enter the sell price : ";
    cin >> sellPrice;

    int cost;
    cout << "enter the cost : ";
    cin >> cost;

    if (sellPrice > cost)
    {
        cout << "we are in profit" << endl;
        cout << "profit is = " << (sellPrice - cost);
    }
    else if (sellPrice < cost)
    {
        cout << "we are in loss" << endl;
        cout << "loss is = " << (cost - sellPrice);
    }

    else
    {
        cout << "we are no profit or loss";
    }
}

/*
 OUTPUT :-
          enter the sell price : 200
          enter the cost : 300
          we are in loss
          loss is = 100

          enter the sell price : 200
          enter the cost : 100
          we are in profit
          profit is = 100
*/