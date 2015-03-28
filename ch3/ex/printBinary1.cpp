//: C03:printBinary.cpp {O}
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>

void printBinary(const unsigned char val) {
  for(int i = 0; i < 8; i++)
    if(val & (0x80 >> i))
      std::cout << "1";
    else
      std::cout << "0";
}

void printBinary(const unsigned int val) {
  for (int i = 31; i >= 0; --i) {
    std::cout << ((val & (1 << i))?1:0);
  }
}

void printBinary(const float val) {
  union {
    float f;
    unsigned int i;
  } u;

  u.f = val;
  for (int i = 31; i >= 0; --i) {
    std::cout << ((u.i & (1 << i))?1:0);
    if (i == 31 || i == 23) 
      std::cout << " ";
  }


}
