//:c03:ex18.cpp

#include <iostream>
using namespace std;

void print_dim(int d[], int size){
  for (int i=0; i < size-1; ++i)
    cout << d[i] << ", ";
  cout << d[size-1];
}

int main(){
  int a[10];
  //char c,d;
  int b[20];
  cout << "a: "<< long(a) << ", b: " << (long)b << endl;
  for (int i=0; i < 30; ++i)
    a[i] = i;
  print_dim(a, 10);
  cout << endl;
  print_dim(b, 20);
  cout << endl;
}
