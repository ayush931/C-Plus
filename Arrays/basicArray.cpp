// Data structure which stores a collection of homogeneous items like int, char, bool, etc.
// They have contiguous (consecutive block of memory) memory.
// Index -> location of every element.

// Array types:- Single dimensional and multidimensional array.

// Arrays are statics, you cannot change the value of an index after assigning it.
// You cannot delete the any element from the any index.

#include<iostream>
using namespace std;

int main () {

    int array[] = {1, 2, 3, 4, 5};

    cout << sizeof(array) << endl;
    cout << sizeof(array) / sizeof(array[0]) << endl;

    int array2[4]; // If we don't initialize the value, it will give the garbage value.

    cout << array2[0] << endl;
    cout << array2[1] << endl;
    cout << array2[2] << endl;
    cout << array2[3] << endl;

    return 0;
}