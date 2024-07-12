/*
    -> Representing grids
    -> Faster and simpler access to an element
    -> Predefined size
*/


#include<iostream>
using namespace std;

int main () {

    int rows, columns;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    int array[rows][columns];

    cout << "Enter the element of array: " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> array[i][j];
        }
    }

    cout << "Your array is: " << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}