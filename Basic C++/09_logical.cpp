#include <bits/stdc++.h>
using namespace std;

int main () {
  bool isStudent;
  int cups;

  cout << "Are you a student (1 for Yes and 0 for No)? ";
  cin >> isStudent;

  cout << "How many cups of tea you purchased: ";
  cin >> cups;

  if (isStudent || cups > 15) {
    cout << "You are eligible for the discount \n";
  }
  else {
    cout << "You are not eligible for the discount \n";
  }

  return 0;
}