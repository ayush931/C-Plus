// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;

int main () {

    int array[] = {2, 1, 3, 1, 2, 4, 3};

    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                array[i] = array[j] = -1;
            }
        }
    }

    // int unique = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            cout << array[i] << endl;
        }
    }

    return 0;
}