#include <iostream>
#include "printBinary.h"
using namespace std;

int main() {
  cout << sizeof(int) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(unsigned char) << endl;
  union {
    float fn;
    unsigned char cn[4];
    int in;
  } dw;
  dw.fn = 6.0000001;
  for (int i=0; i < 4; ++i)
    printBinary(dw.cn[i]);
  cout << endl;


  /*cout << (dw.in >> i) << endl;
  int s = ( dw.in >> 31 ) ? -1 : 1;
  int e = ( dw.in >> 23 ) & 0xFF;
  int m =
      e ?
          ( dw.in & 0x7FFFFF ) | 0x800000 :
              ( dw.in & 0x7FFFFF ) << 1;
  e -= 127;
  cout << s << " * " << m << " * " << 2 << '^' << e << endl;*/
}

