#include <bits/stdc++.h>
using namespace std;

int main () {
  int cups;

  cout << "Enter the number of cups you have: ";
  cin >> cups;

  if (cups > 20) {
    cout << "You will get a gold badge \n";
  }
  else if (cups >= 10 && cups <= 20) {
    cout << "You will get the silver badge \n";
  }
  else {
    cout << "No badge for you \n";
  }

  return 0;
}