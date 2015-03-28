// C03:ex28.cpp
//

#include <iostream>
using namespace std;

void f1(double *arr, int arrSize) {
  for (int i = 0; i < arrSize-1; ++i)
    cout << *arr++ << ", ";
  cout << ++(*arr) << endl;
}

int main() {
  double arr[10];
  cout << (long)arr << endl;
  for (int i=0; i < 10; ++i)
    arr[i] = 0;
  f1(arr, 10);
  cout << (long)arr << endl;

  unsigned char* arr1 = reinterpret_cast<unsigned char*>(arr);

  for (int i = 0; i < 10*sizeof(double); ++i)
    arr1[i] = 1;
  f1(arr, 10);
}
