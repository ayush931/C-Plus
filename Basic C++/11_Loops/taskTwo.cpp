#include <bits/stdc++.h>
using namespace std;

int main () {
  string response;

  do {
    cout << "Do you want more tea (yes/no): ";
    getline(cin, response);
  }
  while (response == "yes" || response == "Yes");

  return 0;
}