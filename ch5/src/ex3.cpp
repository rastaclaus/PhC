#include "clex3.h"
#include <iostream>

using namespace std;

int main() {
  ex3class test1;
  setc(&test1, 10);
  cout << test1.getc() << endl;
}
