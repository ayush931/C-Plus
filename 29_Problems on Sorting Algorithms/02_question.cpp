// Given an array of names of the fruits. You are supposed to sort it in lexicographical order using the selection sort

#include <bits/stdc++.h>
using namespace std;

void selectionSort (char fruit[][60], int n) {

    for (int i = 0; i < n - 1; i++) {
        // finding the main element
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(fruit[minIndex], fruit[j]) > 0) {
                minIndex = j;
            }
        }

        // place the min element at the beginning
        if (i != minIndex) {
            swap(fruit[i], fruit[minIndex]);
        }
    }

    return;
}

int main () {

    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

    int n = sizeof(fruit) / sizeof(fruit[0]);

    selectionSort(fruit, n);

    for (int i = 0; i < n; i++) {
        cout << fruit[i] << " ";
    } cout << endl;

    return 0;
}

// Time complexity -> 0(n^2)
// Space complexity -> 0(1)