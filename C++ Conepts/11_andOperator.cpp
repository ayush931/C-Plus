#include<iostream>
using namespace std;

int main () {

    int num;
    cin >> num;

    if ((num % 2 == 0) && (num % 3 == 0)) {
        cout << "The number is divisible by both 2 and 3 is: " << num << endl;
    }

    return 0;
}