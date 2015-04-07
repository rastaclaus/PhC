#include <iostream>
#include "struct24.h"

using namespace std;

void struct24::initialise(int n){
  d1  = n;
  s1  = 0;
}

struct24 * initList(struct24* s, int size) {
  struct24 * result = s;
  for (int i=0; i < size-1; ++i) {
    s->s1 = new struct24;
    s->s1->d1 = s->d1+1;
    s->s1->s1 = 0;
    s = s->s1;
  }
  return result;
}

void printList(struct24 * s) {
  while (s!=0) {
    cout << s->d1 << endl;
    s = s->s1;
  }
}
