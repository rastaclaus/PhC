#include <iostream>
using namespace std;

int f(double d) {
  int i = static_cast<int>(d);
#ifdef DEBUG
  cout << "f(" << d << ") = " << i << endl;
#endif
  return i;
}

int main() {
  int i = f(9.5);
  int (*pf)(double) = f;
  i= (*pf)(2010.477);
}

