#include <iostream>
#include "struct25.h"

using namespace std;

void struct25::init(int n) {
  d1 = n;
  s1 = 0;
}

void  struct25::initList(int size) {
  struct25 * cursor = this;
  for (int i = 0; i < size-1; ++i) {
    cursor->s1 = new struct25;
    cursor->s1->init(cursor->d1+1);
    cursor = cursor->s1;
  }
}

void struct25::printList() {
  struct25 * cursor = this;
  while (cursor != 0) {
    cout << cursor->d1 << endl;
    cursor = cursor->s1;
  }
}
