#include <iostream>
#include "clex3.h"

int ex3class::getc() {
  return c;
}

void setc(ex3class * op, int nc) {
  op->c = nc;
}

