// A rotated sorted array is a sorted array on which rotation operation has been performed some number of lines. Given a rotated sorted array, find the index of the minimum element in the array. Follow 0-based indexing.
// It is guranteed that all the elements in the array are unique.

#include <bits/stdc++.h>
using namespace std;

int findMinimunInSortedRotated (vector<int> &input) {
    if (input.size() == 1) return input[0];
    int lo = 0;
    int hi = input.size() - 1;
    if (input[lo] < input[hi]) {
        return lo;
    }
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid + 1]) return mid + 1;
        if (input[mid] < input[mid - 1]) return mid;
        if (input[mid] > input[lo]) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return -1;
}

int main () {

    int n;
    cin >> n;

    vector<int> input;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << findMinimunInSortedRotated(input) << endl;
    return 0;
}

// Time complexity -> 0(logn)
// Space complexity -> 0(1)