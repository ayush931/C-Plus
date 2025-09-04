// Write a program to find kth smallest element in an array using quick sort.

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r) {
    
    int pivot = arr[r];

    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[r]);
    return i;
}

int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {

        int pos = partition(arr, l, r); // position of pivot element

        if (pos - l == k - 1) {
            return arr[pos];
        }
        else if (pos - l > k - 1) {
            return kthSmallest(arr, l, pos - 1, k);
        }
        else {
            return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
        }
    }

    return INT_MAX;
}

int main () {

    int arr[] = {3, 5, 2, 1, 4, 7, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 5;

    cout << kthSmallest(arr, 0, n-1, k) << endl;
    
    return 0;
}

// Time Complexity: O(n^2) -> worst case, O(n) -> average case