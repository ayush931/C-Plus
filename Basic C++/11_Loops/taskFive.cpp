#include <bits/stdc++.h>
using namespace std;

int main () {
  string teaType[5] = {"Green Tea", "Black Tea", "Lemon Tea", "Oolong Tea", "Orange Tea"};

  for (int i = 0; i <= 5; i++) {
    if (teaType[i] == "Green Tea") {
      cout << "Skipping the " << teaType[i] << endl;
      continue;
    }
    cout << "Brewing " << teaType[i] << "..." << endl;
  }

  return 0;
}