#include <iostream>
using namespace std;

#define F(x,t) \
  t* array_##t = new t[x]; \
  for (int i=0; i < x; ++i) array_##t[i] =  i; \
  cout << "*array_" #t << "[" #x "],\t" <<  (void*)array_##t << endl; \

#define D(t)\
  delete [] array_##t;

int main() {
  F(100, char);
  F(100, int);
  F(100, long);
  F(100, double);

  D(char);
  D(int);
  D(long);
  D(double);
}

