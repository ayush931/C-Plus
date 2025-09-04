// Find the square root of the given non negative integer value x. Round it off to the nearest floor integer value.

#include <bits/stdc++.h>
using namespace std;

int sqrt (int x) {

    int lo = 1;
    int hi = x;
    int ans = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return ans;
}

int main () {

    cout << sqrt(100) << endl;

    return 0;
}

// Time complexity -> O(logn)
// Space complexity -> O(1)