#include <bits/stdc++.h>
using namespace std;

int checkTemperature (int temperature) {
  return temperature;
}

// declaration of funcion

void serveChai (int cups);

void makeChai () {
  cout << "Making the chai \n";
}

// function overloading

void serveChai (string teaType) {
  cout << "Serving " << teaType << endl;
}

int main () {
  int temp = checkTemperature(50);
  cout << temp << endl;

  serveChai(5);
  serveChai("Lemon Tea");
  makeChai();

  return 0;
}

// definition of function

void serveChai (int cups) {
  cout << "Served the " << cups << " cups of chai \n";
}