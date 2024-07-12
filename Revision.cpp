#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void prefixSum (int array[], int size) {



    for (int i = 0; i < size; i++) {
        array[i] = array[i - 1] + array[i];
    }
}

int main () {

    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    prefixSum(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    return 0;
}