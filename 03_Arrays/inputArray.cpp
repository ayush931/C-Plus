// Taking array from the user and print it.

#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: " << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;

    return 0;
}