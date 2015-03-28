//:C02:task2.cpp
// Запросить радиус круга, вычислить его площадь


#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double radius;
  cout << "Enter a radius: ";
  cin >> radius;
  cout << "circle area is "
    << M_PI*radius*radius << endl;
}///:~
