// A wild pointer is a type of pointer where the user declares the pointer but not visible. Due to this it ends up pointing to some random memory location.

#include<iostream>
using namespace std;

int main () {

    int *ptr; // only declare
    cout << ptr << " " << *ptr;
    
    return 0;
}