// A peak element is an element that is strictly greater than its neighbours. Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks. You may imagine that nums[-1] = nums[n] = -infinity. In other words, an element is always considered to be strictly greater than a neighbour that is outside the array.

#include <bits/stdc++.h>
using namespace std;

int findPeak (vector<int> &input) {
    int n = input.size();
    int lo = 0, hi = n - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (mid == 0) {
            if (input[mid] > input[mid + 1]) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if (mid == n - 1) {
            if (input[mid] > input[mid - 1]) {
                return n - 1;
            }
            else {
                return n - 2;
            }
        }
        else {
            if (input[mid] > input[mid + 1] and input[mid] > input[mid - 1]) {
                return mid;
            }
            else if (input[mid] > input[mid - 1]) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main () {

    vector<int> input = {3, 4, 5, 1, 9, 10, 2, 6, 8, 2};
    cout << findPeak(input) << "\n";
    
    return 0;
}