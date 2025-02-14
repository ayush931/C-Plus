#include <bits/stdc++.h>
using namespace std;

class Chai {
  public:
    // data members (attributes)
    string teaName; // name of the tea
    int servings; // number of serving
    vector<string> ingredients; // list of ingredients for the tea

    // Member function

    void displayChaiDetails () {
      cout << "Tea Name: "  << teaName << endl;
      cout << "Servings: " << servings << endl;
      cout << "Ingredients: ";
      for (string ingredient: ingredients) {
        cout << ingredient << " ";
      }
      cout << endl;
    }
  private: 
    string chaiCost;
};

int main () {
  Chai chaiOne;
  
  chaiOne.teaName = "Lemon Tea";
  chaiOne.servings = 2;
  chaiOne.ingredients = {"Water", "Lemon", "Honey", "Tea"};

  chaiOne.displayChaiDetails();

  Chai chaiTwo;

  chaiTwo.teaName = "Masala Chai";
  chaiTwo.servings = 4;
  chaiTwo.ingredients = {"Water", "Milk", "Tea", "Honey", "Ginger"} ;

  chaiTwo.displayChaiDetails();

  return 0;
}

