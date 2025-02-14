#include <bits/stdc++.h>
using namespace std;

int main () {
  string response;

  while (true) {
    cout << "Do you want more tea (type 'stop' to exit): ";
    getline(cin, response);

    if (response == "stop") {
      // break the loop
      break;
    }
    cout << "Here is your another cup of tea \n";
  }
  cout << "No more tea will be served to you \n";
  return 0;
}