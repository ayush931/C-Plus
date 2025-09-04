// Given an integer, find out the sum of its digit using recursion.

#include<iostream>
using namespace std;

int sumOfDigits (int n) {
    // base case
    if (n <= 9 and n >= 0) return n;
    return sumOfDigits(n / 10) + (n % 10);
}

int main () {
    int result = sumOfDigits(1234);
    cout << result << endl;
    return 0;
}

// Time complexity -> O(n)
// Space complexity -> O(n)