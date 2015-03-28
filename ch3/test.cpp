#include <iostream>

using namespace std;

int main() {
  int i = 10;
  void *p;
  p = &i;
  cout << sizeof(p) << endl;
  cout << sizeof(*(int*)p) << endl;
  cout << *(int*)p << endl;
  int j = 0;
  int k = 1;
  cout << (j and k) << endl;
}
