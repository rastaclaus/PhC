//: C03:VoidPointer.cpp
//
#include <iostream>
using namespace std;


int main(){
  void* vp;
  char c = 'o';
  int i  = 100;
  float f = 200.0;
  double d = 0.300;
  vp  = &c;
  cout << "c = " << *(char*)vp << endl;
  vp  = &i;
  cout << "i = " << *((int*)vp) << endl;
  vp  = &f;
  cout << "f = " << *((float*)vp) << endl;
  vp  = &d;
  cout << "c = " << *((double*)vp) << endl;
}
