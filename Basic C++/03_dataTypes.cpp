#include <iostream>
using namespace std;

int main()
{
  int teaLeaves = 50;
  float waterTemperature = 85.5;
  double priceOfTea = 599.99;
  char teaGrade = 'A';
  bool isTeaReady = true;
  
  cout << waterTemperature << endl;

  unsigned smallTeaPack = -100; // It will not accept the negative value, it will store the garbage value.
  cout << smallTeaPack << endl;

  long largeNumberValue = 1000000000;
  cout << largeNumberValue << endl;

  short teaLeave = 20;
  cout << teaLeave << endl;
  
  return 0;
}
