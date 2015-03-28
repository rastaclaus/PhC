#include <iostream>
using namespace std;

int main() {
#ifdef MAINTEST
  cout << "maintest\n";
#else
  cout << "not maintest\n";
#endif
}
