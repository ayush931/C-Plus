#include<iostream>
using namespace std;

int main () {

    int *ptr; // only declaring the pointer
    cout << ptr << "\n";

    int marks = 90;
    ptr = &marks;

    cout << ptr << "\n"; // re-assignment / update

    return 0;
}