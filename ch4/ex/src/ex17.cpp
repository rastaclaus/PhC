#include <iostream>
using namespace std;

#define F(x,t) \
  t* array_##t = new t[x]; \
  for (int i=0; i < x; ++i) array_##t[i] =  i; \
  cout << "*array_" #t << "[" #x "],\t" <<  array_##t << endl; \

#define D(t)\
  delete [] array_##t;

int main() {
  F(100, char);
  F(100, int);
  F(100, long);
  F(100, double);

  cout << array_char << endl;
  cout << array_int << endl;
  cout << array_long << endl;
  cout << array_double << endl;

  cout << (long)array_char << endl;
  cout << (long)array_int << endl;
  cout << (long)array_long << endl;
  cout << (long)array_double << endl;
  /*for (int i = 0; i < 100; ++i) {
    cout << (int)array_char[i] << ", " << array_int[i]+100 << ", " 
      << array_long[i] + 1000 << ", " << (array_double[i] + 10000)/3 << endl;
  }*/

  D(char);
  D(int);
  D(long);
  D(double);
}

