#include "../CppLib.h"
#include <iostream>
using namespace std;

int main() {
  Stash dStash;
  dStash.initialize(sizeof(double));
  double d = 0;
  for (int i=0; i < 25; ++i) {
    dStash.add(&d);
    d+=0.1;
  }
  for (int i=0; i < dStash.count(); ++i) {
    cout << *(double*)dStash.fetch(i) << endl;
  }
}
