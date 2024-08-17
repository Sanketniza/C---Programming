#include <iostream>
using namespace std;

class shopItem
{

    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }

    void getData(void)
    {
        cout << "Code of this item is: " << id << endl;
        cout << "The price of this item is: " << price << endl;
    }
};

int main() {

    int size = 3;

    int *shopItem = new int[size];

    shopItem *ptrTemp = ptr;

    int q , p;
    float e;

    for (int i = 0; i < size; i++)
    {
        cout << "The quantity of this item is: " << i << endl;
        cin >> p >> q ;
        ptr->setData(p,q);
        ptr++;
    }
     
     for (int i = 0; i < size; i++)
     {
       ptrTemp->setData();
       ptrTemp++;
     }
     
}