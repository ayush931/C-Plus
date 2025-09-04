// Repeatedly find minimum element in unsolved array and place it at beginning of an unsorted array.

#include <iostream>
#include <vector>
using namespace std;

void selectionSort (vector<int> &v) {

    int n = v.size();

    for (int i = 0; i < n; i++) {
        // finding min element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        // Placing min element at beginning

        if (i != minIndex) {
            swap(v[i], v[minIndex]);
        }
    }
}

int main () {

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    selectionSort(v);

    cout << "Sorted Array is: \n";

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    } cout << endl;

    return 0;
}

// Time complexity -> O(n^2)
// Space Complexity -> O(1)

// Stable sort -> Order of elements with same value are not disturbed.
// It is an unstable sorting algorithm.