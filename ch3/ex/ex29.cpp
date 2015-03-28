//:C03:ex29.cpp

#include "printBinary1.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  union {
    float fn;
    unsigned char cb[4];
    unsigned int in;
  } uw;

  for (float val = -10; val <= 10 ;val+=.1) {
    printBinary(val);
    cout << endl;
  }
}
