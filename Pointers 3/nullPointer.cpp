// Null pointer:- If we want to have a pointer variable, which is just declared but will get address later to store.

#include<iostream>
using namespace std;

int main () {

    int *ptr = NULL;
    int *ptr1 = 0;
    int *ptr2 = '\0';

    cout << ptr << "\n";
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    return 0;
}

// Got segmentation fault or runtime error after dereferencing the pointer

// 0 is mostly a special reserved memory address in many os.