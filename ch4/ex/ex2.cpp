#include <iostream>
using namespace std;

struct S {
  void f();
};

void S::f() {
  cout << "S::f() call\n";
}

int main() {
  S s;
  s.f();
}
