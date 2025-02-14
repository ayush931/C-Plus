#include <bits/stdc++.h>
using namespace std;

int main () {
  int chaiSales[3][7] = {
    {45, 34, 56, 73, 42, 45,67}, // Shop 1 sales for 7 days
    {23, 24, 56, 34, 75, 31, 90}, // Shop 2 sales for 7 days
    {89, 30, 24, 56, 75, 43, 24}, // Shop 3 sales for 7 days
  };

  for (int i = 0; i < 3; i++) {
    cout << "I am at shop: " << i + 1 << endl;
    for (int j = 0; j < 7; j++) {
      cout << chaiSales[i][j] << " cups \n";
    }
  }

  return 0;
}