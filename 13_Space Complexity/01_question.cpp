/*
* Space complexity -> It is the extra memory space requirement of an algorithm, using the asymptotic analysis.
*/

// Print the nth fibonacci number.

#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;

    cout << "Enter the nth term for fibonacci number ";
    cin >> n;

    int a = 0;
    int b = 1;
    int c = 1;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Fibonacci number for the nth term is " << c << endl; 

    return 0;
}

/*
 *  Space complexity -> O(1) 
 *  Time complexity -> O(n)
 */