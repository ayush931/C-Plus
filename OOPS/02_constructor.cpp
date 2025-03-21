// used to initialise an object
// This is function which is called when an object is created
// same name as class name
// types -> default, parameterized, copy

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
  public:
  int l;
  int b;

  Rectangle() {   // default constructor -> no args passed
    l = 0;
    b = 0;
  }

  Rectangle(int x, int y) {
    l = x;
    b = y;
  }
};



int main () {

}