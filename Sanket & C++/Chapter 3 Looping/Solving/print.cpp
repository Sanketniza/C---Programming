#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];

    for(int i = 0; i < size; ++i) {
        numbers[i] = i + 1;
        cout << numbers[i] << endl;
    }
    

    return 0;
}
