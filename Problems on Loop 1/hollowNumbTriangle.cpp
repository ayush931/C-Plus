#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter the size of equilateral triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i == 1 || j == 1 || i == n || j == (2 * i - 1)) {
                cout << i;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}