
//! Create a program to transpose a matrix.

#include <iostream>
using namespace std;


void transposeMatrix(int matrix[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int brr[3][3] = {{5, 0, 1}, {0, 5, 1}, {1, 0, 5}};

    int transposedArr[3][3];
    int transposedBrr[3][3];

    transposeMatrix(arr, transposedArr);
    transposeMatrix(brr, transposedBrr);

    cout << "Transposed Arr: " << endl;
    printMatrix(transposedArr);

    cout << "Transposed Brr: " << endl;
    printMatrix(transposedBrr);

    return 0;
}