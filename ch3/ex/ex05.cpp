//:C03:Ex05.cpp
#include <iostream>
using namespace std;

#define PR(EX) cout << #EX " = " << EX << endl;

int main() {
  int X,Y,Z;
  X = 1; Y = 2, Z = 3;
  PR(X+Y-2/2+Z);
  PR(X+(Y-2)/(2+Z));
}
