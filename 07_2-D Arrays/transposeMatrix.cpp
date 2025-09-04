// Write a program to display transpose of matrix entered by the user.

#include<iostream>
using namespace std;

int main () {

    int rows, columns;
    cout << "Enter the no of rows: ";
    cin >> rows;

    cout << "Enter the no of columns: ";
    cin >> columns;

    int matrix[rows][columns];

    cout << "Enter the element of matrix " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int transpose[columns][rows];

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    cout << "Transpose of entered matrix is: " << endl;

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}