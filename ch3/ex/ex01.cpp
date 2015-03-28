//:C03:ex01.cpp

#include "ex01.h"
#include <iostream>

using namespace std;


void func1(int a) {
  cout << "void func1(" << a << ")\n";
}

int func2() {
  cout << "void func2()\n";
  return 0;
}

char func3(int a, float b) {
  cout << "char func3(" << a << ", " << b << ")\n";
  return 'a';
}

double func4(int a, char b) {
  cout << "double func4(" << a << ", " << b << ")\n";
  return 0.0;
}
