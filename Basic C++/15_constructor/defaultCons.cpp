#include <bits/stdc++.h>
using namespace std;

class Chai {
  public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // default constructor
    Chai() {
      teaName = "Unknown tea";
      servings = 1;
      ingredients = {"Water", "Tea leaves"};
      cout << "Constructor called \n";
    }

    void displayChaiDetails () {
      cout << "Tea Name: "  << teaName << endl;
      cout << "Servings: " << servings << endl;
      cout << "Ingredients: ";
      for (string ingredient: ingredients) {
        cout << ingredient << " ";
      }
      cout << endl;
    };
};

int main () {
  Chai defaultChai;

  defaultChai.displayChaiDetails();

  return 0;
}
