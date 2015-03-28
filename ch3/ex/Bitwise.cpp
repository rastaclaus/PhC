//: C03:Bitwise.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//{L} printBinary
// Demonstration of bit manipulation
#include "printBinary.h"
#include "Rotation.h"
#include <iostream>
using namespace std;

// A macro to save typing:
#define PR(STR, EXPR) \
  cout << STR; printBinary(EXPR); cout << endl;  

int main() {
  unsigned int getval;
  unsigned char a, b;
  cout << "Enter a number between 0 and 255: ";
  cin >> getval; a = getval;
  PR("a in binary: ", a);
  cout << "Enter a number between 0 and 255: ";
  cin >> getval; b = getval;
  PR("b in binary: ", b);
  PR("a | b = ", a bitor b);
  PR("a & b = ", a bitand b);
  PR("a ^ b = ", a xor b);
  PR("~a = ", compl a);
  PR("~b = ", compl b);
  // An interesting bit pattern:
  unsigned char c = 0x80; 
  PR("c in binary: ", c);
  a or_eq c;
  PR("a |= c; a = ", a);
  b and_eq c;
  PR("b &= c; b = ", b);
  b xor_eq a;
  PR("b ^= a; b = ", b);
  unsigned char d = c;
  PR("d = ", d);
  for (int i=1; i<10; ++i){
    d = ror(d);
    PR("one bit left: ",d);
  }

} ///:~
