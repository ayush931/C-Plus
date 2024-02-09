#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n - 2; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n - 2 || j == n) {
                cout << j;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
