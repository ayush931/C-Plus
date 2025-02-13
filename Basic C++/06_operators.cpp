#include <bits/stdc++.h>
using namespace std;

int main() {
  int cups;
  double pricePercup, totalPrice, discountedPrice;

  cout << "Enter the number of tea cups: ";
  cin >> cups;

  cout << "Enter the price per cup: ";
  cin >> pricePercup;

  totalPrice = cups * pricePercup;

  if (totalPrice > 100) {
    discountedPrice = totalPrice - (totalPrice * 0.05);
    cout << "Discounted price is: " << discountedPrice << endl;
  } else {
    cout << "Total price is: " << totalPrice << endl;
  }

  return 0;
}
