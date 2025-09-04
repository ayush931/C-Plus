#include <bits/stdc++.h>
using namespace std;

void countSort (vector<int> &v, int pos) {

    // create frequency array

    vector<int> freq(10, 0);
    int n = v.size();

    for (int i = 0; i < n; i++) {
        freq[(v[i] / pos) % 10]++;
    }

    // calculate cumulative frequency

    for (int i = 1; i < 10; i++) {
        freq[i] += freq[i - 1];
    }

    // ans array

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    for (int i = 0; i < n; i++) {
        v[i] = ans[i];
    }
}

void radixSort (vector<int> &v) {

    int max_ele = INT_MIN;

    for (auto x:v) {
        max_ele = max(max_ele, x);
    }

    for (int pos = 1; max_ele / pos > 0; pos *= 10) {
        countSort(v, pos);
    }

}

int main () {

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    radixSort(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    } cout << endl;

    return 0;
}

// Time complexity -> O(d*(n))
// Space complexity -> O(n)