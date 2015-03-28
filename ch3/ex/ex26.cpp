//C03:ex26.cpp

#include <iostream>
using namespace std;
const int arrsize = 100;

void initArray(void* arr, int size, int val){
  int *a = static_cast<int*>(arr);
  for (int i=0; i < arrsize; ++i){
    *a = val;
    ++a;
  }
}


int main() {
  int a[arrsize];
  cout << sizeof(a) << endl;
  void *pa = static_cast<void*>(a);
  initArray(pa, sizeof(a), 1);
  for (int i=0; i < arrsize-1; ++i)
    cout << a[i] << ", ";
  cout << a[arrsize-1] << endl;
}
