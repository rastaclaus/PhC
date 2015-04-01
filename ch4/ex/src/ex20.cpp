#include <iostream>
using namespace std;

int main() {
  struct S1 {
  };

  struct S2 {
    int i;
  };

  struct S3 {
    int i;
    int j;
  };

  struct S4 {
    void f(){}
  };

  struct S5 {
    int f1(){return 0;}
  };

  cout << sizeof(S1) << endl << sizeof(S2) << endl << sizeof(S3) << endl
    << sizeof(S4) << endl << sizeof(S5) << endl;

  int (S5::*p)() = &S5::f1;
  S5 s5;
  cout << (s5.*p)() << endl;
}
