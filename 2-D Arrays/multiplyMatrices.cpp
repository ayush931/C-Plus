// Write a program to display multiplication of two matrices entered by the user.

#include<iostream>
using namespace std;

int main () {

    int row1, column1;

    cout << "Enter the row of Matrix 1: ";
    cin >> row1;

    cout << "Enter the column of Matrix 1: ";

    cin >> column1;

    int array1[row1][column1];

    cout << "Enter the element of Matrix 1" << endl;

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cin >> array1[i][j];
        }
    }

    int row2, column2;

    cout << "Enter the row of Matrix 2: ";
    cin >> row2;

    cout << "Enter the column of Matrix 2: ";
    cin >> column2;

    int array2[row2][column2];

    cout << "Enter the element of Matrix 2" << endl;

    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cin >> array2[i][j];
        }
    }

    if (column1 != row2) {
        cout << "Matrix multiplication is not possible for this input";
    }

    int ansArray[row1][column2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            int value = 0;
            for (int k = 0; k < row2; k++) {
                value += array1[i][k] * array2[k][j];
            }
            ansArray[i][j] = value;
        }
    }

    cout << "Multiplication of Matrix 1 and Matrix 2: " << endl;

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            cout << ansArray[i][j] << " ";
        }
    }
    
    return 0;
}