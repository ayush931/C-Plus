// Given an integer array arr, move all the 0's at the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

#include <iostream>
#include <vector>
using namespace std;

void swapZerosToEnd (vector<int> &v) {

    int n = v.size();

    for (int i = n - 1; i >= 0; i--) {

        int j = 0;
        bool flag = false;

        while (j != i) {
            if (v[j] == 0 && v[j + 1] != 0) {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }

        if (!flag) break;
    }

    return;
}

int main () {

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    swapZerosToEnd(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    } cout << endl;

    return 0;
}

// space complexity -> 0(1)
// Time complexity -> 0(n^2)

// TODO: make it in 0(n) time complexity