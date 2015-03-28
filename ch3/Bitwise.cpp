//: C03:Bitwize.cpp
// {L} printBinary
// Демонстрация поразрядных опера

#include "printBinary.h"
#include <iostream>
using namespace std;

#define PR(STR, EXPR) \
  cout << STR; printBinary(EXPR); cout << endl;


int main() {
  unsigned int getval;
  unsigned char a, b;
  cout << "Введите число от 0 до 255:";
  cin >> getval;
  a = getval;
  PR("a in binary:", a);

  cout << "Введите число от 0 до 255:";
  cin >> getval;
  b = getval;
  PR("b in binary:", b);

  PR("a | b = ", a | b);
  PR("a & b = ", a & b);
  PR("a ^ b = ", a ^ b);
  PR("~a = ", ~a);
  PR("~b = ", ~b);

  unsigned char c = 0x5a;
  PR("c in binary: ", c);
  a |= c;
  PR ("a |= c, a = " , a)
  b &= c;
  PR ("b &= c, b = " , b)
  b ^= a;
  PR ("b ^= a, b = " , b)

} ///:~
