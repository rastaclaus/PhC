#include "s2.h"
#include <iostream>

using namespace std;

void setS2(S2* s2, int i) {
  s2->d = i;
}

void outS2(S2* s2) {
  cout << "S2::d = " << s2->d << endl;
}
