#include<iostream>
using namespace std;

int factorial (int n) {
    // base case
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main () {
    int result = factorial(5);
    cout << result << endl;
    return 0;
}

// Space gets introduce due to call stack.

// syntax 

/**
 * methodName (N parameters) {
 *  if (halfCondition) {
 *      return result
 *  }
 *  return methodName (N parameters)
 * }
 */


// Time complexity -> O(n)
// Space complexity -> O(n)