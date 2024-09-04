#include<iostream>
using namespace std;

int main () {
    
    int x = 20;
    double dec = 9.8;
    int *ptr = &x;
    double *ptrd = &dec;

    cout << "Sixe of x: " << sizeof(x) << "\n";
    cout << "Sixe of dec: " << sizeof(dec) << "\n";

    cout << ptr << " " << (ptr + 1) << endl;
    cout << ptrd << " " << (ptrd + 2) << endl;

    return 0;
}

// increment:- Here increment of a pointer value refers to shift in memory location that pointer is pointing on.