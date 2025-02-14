// pass by reference

#include <bits/stdc++.h>
using namespace std;

int globalChaiStock = 100; // global variable

void pourChai (int &cups) {
  cups = cups + 5;
  cout << "Poured " << cups << " cups of chai \n";
}

int main () {
  int cups = 2;
  pourChai(cups);

  cout << "Total cups are " << cups << endl;
  return 0;
}