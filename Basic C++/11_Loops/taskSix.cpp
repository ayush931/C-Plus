#include <bits/stdc++.h>
using namespace std;

int main () {
  string teaType[5] = {"Green Tea", "Black Tea", "Lemon Tea", "Oolong Tea", "Orange Tea"};

  for (int i = 0; i < 5; i++) {
    cout << "Brewing " << teaType[i] << "..." << endl;
    for (int j = 1; j <= 3; j++) {
      cout << "Brewing " << j << " cup of " << teaType[i] << endl;
    }
  }
  
  return 0;
}