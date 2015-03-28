//: C03:Union.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// The size and simple use of a union
#include <iostream>
using namespace std;

union Packed { // Declaration similar to a class
  char i;
  short j;
  int k;
  long l;
  float f;
  double d;  
  // The union will be the size of a 
  // double, since that's the largest element
};  // Semicolon ends a union, like a struct

void pprnt(Packed x){
  cout << "Packed x = :\n";
  cout << "x.i : " << x.i << endl;
  cout << "x.j : " << x.j << endl;
  cout << "x.l : " << x.l << endl;
  cout << "x.k : " << x.k << endl;
  cout << "x.f : " << x.f << endl;
  cout << "x.d : " << x.d << endl;
}

int main() {
  cout << "sizeof(Packed) = "
       << sizeof(Packed) << endl;
  Packed x;
  x.i = 'c';
  pprnt(x);
  x.d = 3.14159;
  pprnt(x);

} ///:~
