// Rotate the given array 'a' by k steps, where k is non-negative.
// Note:- k can be greater than n as well where n is the size of array 'a'.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main () {

    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k = k % v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int a:v) {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}