#include <bits/stdc++.h>
using namespace std;

int main () {
  // lambda

  auto preparedChai = [](int cups) {
    cout << "Preparing " << cups << " cups of tea \n";
  };

  preparedChai(4);

  return 0;
}