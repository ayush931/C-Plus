#include <bits/stdc++.h>
using namespace std;

int main () {
  int teaBags;

  cout << "Enter the no of tea bags you have: ";
  cin >> teaBags;

  if (teaBags < 10) {
    teaBags += 5;
  }
  
  cout << "Your total bags are: " << teaBags << endl;

  return 0; 
}