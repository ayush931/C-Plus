//! For Loop

/*
* for(init-statement(starting point); condition(stopping point); final expression(loop variable-update)) {
*     code
* }
*/


#include<iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum << endl;
    
    return 0;
}